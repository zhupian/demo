import { defineStore } from "pinia";
export const useCountStore = defineStore('count', {
    //真正存储数据的地方
    state() {
        return {
            sum: 6
        }
    },
    //对数据不满意可以再次对数据加功一下
    getters: {
        bigSum(state) {
            return state.sum * 10
        }
    }
});