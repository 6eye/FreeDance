#ifndef RENDER_H
#define RENDER_H

#include <QtOpenGL>
#include <QGLWidget>

#include "kinect.h"
#include "io_frames.h"
#include "skeleton.h"

class Render : public QGLWidget
{
    Q_OBJECT
public:
    explicit Render(int framesPerSecond, QWidget *parent, cv::Mat &mat_preview_after_, Kinect *kinect, QSharedPointer<IO_frames> &saveload_, QSharedPointer<Skeleton> &SP_skeleton_, const char *name);
    virtual void initializeGL() = 0;
    virtual void resizeGL(int width, int height) = 0;
    virtual void paintGL() = 0;

    void change_play_pause(bool p); // to pause or run the motion loop
    bool status_play_pause();

public slots:
    virtual void timeOutSlot();

private:
    QTimer *t_Timer;
    int interval_time = 1000; // interval time between each image
    bool play_pause; // play : true pause : false

protected:
    QSharedPointer<IO_frames> SP_saveload;
    QSharedPointer<Skeleton> SP_skeleton;
    Kinect *kinect;
    cv::Mat &mat_preview_after;
    int width, height;
    int status; // can be STATUS_KINECT, STATUS_MOTION, STATUS_RECORD, STATUS_SKELETON
};

enum {
    STATUS_NONE,
    STATUS_KINECT,
    STATUS_MOTION,
    STATUS_RECORD,
    STATUS_SKELETON
};

#endif // RENDER_H
