import { ISystemUser, SystemUserAddressType } from "./ISystemUser";

export class Admin implements ISystemUser {
  public firstName: string;
  public userName: string;

  constructor(firstName: string, userName: string) {
    this.firstName = firstName;
    this.userName = userName;
  }

  async getAddresses(): Promise<SystemUserAddressType[]> {
      return new Promise((resolve) => {
        return setTimeout(() => {
          return resolve([
            { street: 'Av. Java', number: 11 },
            { street: 'Av. Magalhães', number: 42 },
          ]);
        }, 2000);
      });
  }
}