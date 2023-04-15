#include "affichage.hpp"

Affichage::Affichage()
{
    // Connect Jeu signal with Affichage slot
    //QObject::connect(&jeu, SIGNAL(sendResponse(QString)), this, SLOT(getResponse(QString)));
    AffichageScene = new QGraphicsScene();
    setup();
    //placePieces();
}

void Affichage::setup()
{
    int j = 0;
    int k = 0;
    bool black = true;
    for(int i=0; i<64; i++)
    {
        QString Casename = Cases[i];
        Case * s = new Case(j,k);
        s->setRect(j,k,50,50); //x loc, y loc, width, height

        // Color squares
        if (i % 8 == 0)
        {
            black = !black;
        }

        if (black)
        {
            s->setBrush(Qt::lightGray);
        }
        black = !black;

        s->setName(Casename);
        CaseList.append(s);
        AffichageScene->addItem(s);
        // Connect Case signal with Jeu slot
        //QObject::connect(s, SIGNAL(sendSignal(QString)), &jeu, SLOT(getInput(QString)));

        j += 50;
        if (j == 400)
        {
            j = 0;
            k += 50;
        }
    }


}
