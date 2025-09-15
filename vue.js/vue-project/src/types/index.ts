//定义了一个接口用于限制person的基本属性
export interface PersonInter {
    id: string,
    name: string,
    age: number
}
export type Persons = Array<PersonInter>
// export type Persons=PersonInter[];