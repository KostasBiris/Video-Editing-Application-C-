#ifndef VIDEO_SETTINGS_H
#define VIDEO_SETTINGS_H


#include <QWidget>
#include "the_player.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Settings; }
QT_END_NAMESPACE

class VideoSettings : public QWidget
{
    Q_OBJECT

public:
    VideoSettings(QWidget *parent = nullptr);
    void makePlayerConnections(ThePlayer* player);
    int volume() const;
    void onVolumeSliderValueChanged();
    void onPositionSliderValueChanged(int position);
    ~VideoSettings();

signals:
     void changeVolume(int volume);
     void setPosition(int position);

private slots:
     void positionChanged(qint64 position);
     void durationChanged(qint64 duration);

private:
    Ui::Settings  *ui;
};

#endif // VIDEO_SETTINGS_H
