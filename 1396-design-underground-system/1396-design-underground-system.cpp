class UndergroundSystem {
public:
  map<pair<string,string>,vector<int>>tm;
    map<int,pair<int,string>>records;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        records[id]={t,stationName};
    }
    
    void checkOut(int id, string stationName, int t) {
        int sTime=records[id].first;
        string sName=records[id].second;
        tm[{sName,stationName}].push_back(t-sTime);
    }
    
    double getAverageTime(string startStation, string endStation) {
        double ans=0;
        int size=tm[{startStation,endStation}].size();
        for(auto i:tm[{startStation,endStation}]){
            ans += i;
        }
        return ans/size;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */