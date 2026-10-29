__int64 __fastcall sub_2EA20(__int64 **a1)
{
  __int64 *v1; // rax
  __int64 (__fastcall *v2)(__int64, unsigned int *); // rax
  unsigned int *v3; // rax
  unsigned int v4; // edx
  __int64 result; // rax
  __int64 *v6; // rax
  __int64 (__fastcall *v7)(__int64, unsigned int *); // rax
  unsigned int *v8; // rax
  unsigned int v9; // edx
  __int64 (__fastcall *v10)(__int64, int *); // rax
  int *v11; // rax
  int v12; // eax
  unsigned int v13; // [rsp+Ch] [rbp-1Ch] BYREF
  unsigned int v14; // [rsp+10h] [rbp-18h] BYREF
  int v15; // [rsp+14h] [rbp-14h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-10h]

  v1 = *a1;
  v16 = __readfsqword(0x28u);
  v13 = 0;
  v2 = (__int64 (__fastcall *)(__int64, unsigned int *))v1[23];
  if ( v2 == sub_2DCC0 )
  {
    v3 = (unsigned int *)sub_2CEC0(a1[2], 0x100000, 0x400u, 0x4000000);
    if ( !v3 )
      return 0;
    v4 = *v3;
    v13 = *v3;
  }
  else
  {
    if ( (unsigned int)v2((__int64)a1, &v13) )
      return 0;
    v4 = v13;
  }
  result = 3;
  if ( v4 == 6 )
    return result;
  if ( v4 <= 6 )
    return 2 * (unsigned int)(v4 == 5);
  if ( v4 != 7 && v4 != 10 )
    return 0;
  v6 = *a1;
  v14 = 0;
  v7 = (__int64 (__fastcall *)(__int64, unsigned int *))v6[16];
  if ( v7 == sub_2DD20 )
  {
    v8 = (unsigned int *)sub_2CEC0(a1[2], (__int64)&stru_10000, 0x400u, 0x4000000);
    if ( v8 )
    {
      v9 = *v8;
      v14 = *v8;
      goto LABEL_11;
    }
  }
  else
  {
    v7((__int64)a1, &v14);
  }
  v9 = v14;
LABEL_11:
  if ( v9 == 3 )
  {
    v10 = (__int64 (__fastcall *)(__int64, int *))(*a1)[20];
    if ( v10 == sub_2DD50 )
    {
      v11 = (int *)sub_2CEC0(a1[2], 0x20000, 0x400u, 0x4000000);
      if ( v11 )
      {
        v12 = *v11;
LABEL_26:
        if ( v12 != 22 && v12 != 335 && v12 != 81 )
          return 0;
        return 6;
      }
    }
    else if ( !(unsigned int)v10((__int64)a1, &v15) )
    {
      v12 = v15;
      goto LABEL_26;
    }
    return 0;
  }
  if ( v9 <= 3 )
    return v9 - 1 < 2 ? 5 : 0;
  result = 0;
  if ( v9 == 5 )
    return 6;
  return result;
}
