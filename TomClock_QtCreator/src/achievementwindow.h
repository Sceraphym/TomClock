#ifndef ACHIEVEMENTWINDOW_H
#define ACHIEVEMENTWINDOW_H

#include <QWidget>

namespace Ui {
class AchievementWindow;
}

class AchievementWindow : public QWidget
{
    Q_OBJECT

public:
    explicit AchievementWindow(QWidget *parent = nullptr);
    ~AchievementWindow();

private:
    Ui::AchievementWindow *ui;

private slots:
    void MaintoAchievement();
};

#endif // ACHIEVEMENTWINDOW_H
