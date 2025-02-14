#ifndef OURTEAM_H
#define OURTEAM_H

#include <QWidget>

namespace Ui {
class OurTeam;
}

class OurTeam : public QWidget
{
    Q_OBJECT

public:
    explicit OurTeam(QWidget *parent = nullptr);
    ~OurTeam();

signals:
    void BacktoAbout();

private slots:
    void AbouttoTeam();

    void on_backToAbout_clicked();

private:
    Ui::OurTeam *ui;
};

#endif // OURTEAM_H
