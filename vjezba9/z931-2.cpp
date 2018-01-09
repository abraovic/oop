/**
 Korak 1:
 Klasa ima dva privatna property-a koja definiraju koordinate
 točke. Klasa ima definiran konstruktor koji postavlja koordinate
 na (0, 0). Uz to implementirani su getter i setter metode za svaku
 pojedinu os.
 
 Korak 2:
    class Tocka3D : public Tocka2D
    {
    public:
        Tocka3D();
        
        void SetZ(double z);
        double GetZ();
        
        bool operator==(const Tocka3D& t);
        Tocka3D(Tocka3D& t);
    private:
        double m_z;
    };

    Tocka3D::Tocka3D() :Tocka2D(){
        m_z = 0.0;
    }
    void Tocka3D::SetZ(double z) {
        m_z = z;
    }

    double Tocka3D::GetZ(){
        return m_z;
    }

    bool Tocka3D::operator==(const Tocka3D& t) {
        if (m_x == t.m_x && m_y == t.m_y && m_z == t.m_z) {
            return true;
        }
        
        return false;
    }

    Tocka3D::Tocka3D(Tocka3D& t) {
        m_x = t.m_x;
        m_y = t.m_y;
        m_z = t.m_z;
    }
*/

#include <iostream>

using namespace std;

class Tocka2D {
public:
    Tocka2D();
    //    ~Tocka2D();
    void SetX(double x);
    void SetY(double y);
    double GetX();
    double GetY();
protected:
    double m_x, m_y;
};

Tocka2D::Tocka2D() {
    m_x = 0.0;
    m_y = 0.0;
}
void Tocka2D::SetX(double x) {
    m_x = x;
}
void Tocka2D::SetY(double y) {
    m_y = y;
}
double Tocka2D::GetX() {
    return m_x;
}
double Tocka2D::GetY() {
    return m_y;
}

class Tocka3D : public Tocka2D
{
public:
    Tocka3D();
    
    void SetZ(double z);
    double GetZ();
    
    bool operator==(const Tocka3D& t);
    Tocka3D(Tocka3D& t);
private:
    double m_z;
};

Tocka3D::Tocka3D() :Tocka2D(){
    m_z = 0.0;
}
void Tocka3D::SetZ(double z) {
    m_z = z;
}

double Tocka3D::GetZ(){
    return m_z;
}

bool Tocka3D::operator==(const Tocka3D& t) {
    if (m_x == t.m_x && m_y == t.m_y && m_z == t.m_z) {
        return true;
    }
    
    return false;
}

Tocka3D::Tocka3D(Tocka3D& t) {
    m_x = t.m_x;
    m_y = t.m_y;
    m_z = t.m_z;
}

int main() {
    Tocka2D T;
    cout << T.GetX() << " " << T.GetX() << endl;
    
    Tocka3D T3;
    T3.SetX(1);
    T3.SetY(2);
    T3.SetZ(3);
    cout << T3.GetX() << " " << T3.GetY() << " " << T3.GetZ() << endl;
    
    Tocka3D T4 = T3;
    cout << T4.GetX() << " " << T4.GetY() << " " << T4.GetZ() << endl;
    
    Tocka3D T5;
    if (T3 == T5) {
        cout << "Jednaki su" << endl;
    } else {
        cout << "Razliciti su" << endl;
    }
    
    return 0;
}