export type SystemUserAddressType = { street: string, number: number };

export interface ISystemUser {
  getAddresses: () => Promise<SystemUserAddressType[]>;
}