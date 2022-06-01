import axios from 'axios';
import React, { useEffect, useState } from 'react';
import LineChart from './LineChart';

const DataSets = () => {
    var dataSet = [];
    var data_1 = [];
    var data_2 = [];
    useEffect(() => {
        const cargarDatos=async()=>{
            const response = await axios("http://10.0.2.6:4000/test");
            dataSet = response.data;
            for(var i=0; i<dataSet.length; i++){
                //console.log(dataSet[i]);
                if(!data_1.includes(dataSet[i].value_1)){
                    data_1.push(dataSet[i].value_1);
                }
                if(!data_2.includes(dataSet[i].value_2)){
                    data_2.push(dataSet[i].value_2);
                }                
            }    
        }
        cargarDatos();
        /*axios.get("http://10.0.2.6:4000/test").
            then((response) => {
                console.log(response.data);
                dataSet = response.data;
                // console.log("Data: ", dataSet.length);    
                for(var i=0; i<dataSet.length; i++){
                    //console.log(dataSet[i]);
                    data_1.concat(dataSet[i].value_1);
                    data_2.push(dataSet[i].value_2);
                }            
            })
            .catch((error) => {
                console.log(error);
            });   */         
    }, []);
    
    return (
        <>
            <LineChart
            Data1 = {data_1}
            Data2 = {data_2}
            />
        </>
    )
}

export default DataSets;