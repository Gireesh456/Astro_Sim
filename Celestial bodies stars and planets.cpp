#include<bits/stdc++.h>
using namespace std;
class celestial_body{
public:
    const double pi=3.14159;
    const double G=6.674e-11;
    const double hr_in_secs=3600.0;
    const double km_in_mts=1000.0;
    long double mass_kgs;
    long double radius_kms;
    long double distance_from_earth_in_AU;             //AU-astronomical unit.
    string type_of_body;                               //black hole,kuiper belt objects,planet,star.
    long double average_density(){
        return (3*mass_kgs/(4*pi*radius_kms*radius_kms*radius_kms*km_in_mts*km_in_mts*km_in_mts));
    }
    double accelration_due_to_gravity_on_surface(){
    return (G*mass_kgs/(radius_kms*radius_kms*km_in_mts*km_in_mts));
    }
    double escape_velocity_in_km_per_sec(){
        return sqrt(2*accelration_due_to_gravity_on_surface()*radius_kms*km_in_mts);
    }
};
class planet :public celestial_body{
public:
    string star_hosting_this_planet;
    long double average_revolution_speed_kmspersec;
    long double average_rotation_speed_kmspersec;
    long double time_period_of_revolution_in_earth_yrs;
    long double distance_from_hosting_star_in_AU;        //average distance in astronomical units.
    long double areal_velocity;
    int  number_of_satellites;
    double time_period_of_rotation(){
        return (2*pi*radius_kms/(average_rotation_speed_kmspersec*hr_in_secs));
    }
    double angular_momentum_about_hosting_star(){
        return (2*areal_velocity*mass_kgs);
    }
};
class star :public celestial_body{
  public:
  const double weins_constant=2.89777e-3;
  double surface_tempurature_K;
  double core_tempurature_K;
  double distance_from_earth_in_lightyears;
  double lumniosity;
  int number_of_planets;
  double wavelength_of_max_intensity_nanometers(){
      return (1e9*weins_constant/surface_tempurature_K);
  }
};
int main(){
    return 0;
}