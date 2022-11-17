import { ISystemUser, SystemUserAddressType } from "./ISystemUser";

export class Admin implements ISystemUser {
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