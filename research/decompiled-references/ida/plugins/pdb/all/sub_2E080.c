__int64 __fastcall sub_2E080(_QWORD *a1, __int64 **a2)
{
  __int64 *v3; // rax
  __int64 (__fastcall *v4)(__int64, unsigned int *); // rax
  unsigned int *v5; // rax
  unsigned int v6; // eax
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, int *); // rax
  int *v10; // rax
  unsigned int v11; // [rsp+0h] [rbp-28h] BYREF
  int v12; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-20h]

  v3 = *a2;
  v13 = __readfsqword(0x28u);
  v11 = 0;
  v4 = (__int64 (__fastcall *)(__int64, unsigned int *))v3[23];
  if ( v4 == sub_2DCC0 )
  {
    v5 = (unsigned int *)sub_2CEC0(a2[2], 0x100000, 0x400u, 0x4000000);
    if ( v5 )
    {
      v6 = *v5;
      v11 = v6;
      goto LABEL_4;
    }
LABEL_14:
    v6 = v11;
LABEL_4:
    if ( v6 == 6 )
    {
      v8 = *(_QWORD *)(a1[2] + 320LL);
      a1[1] = a2;
      return (*(__int64 (__fastcall **)(__int64, __int64 **, _QWORD, _QWORD *))(*(_QWORD *)v8 + 16LL))(v8, a2, 0, a1);
    }
    if ( v6 - 21 <= 1 )
      return 0;
    v9 = (__int64 (__fastcall *)(__int64, int *))(*a2)[16];
    if ( v9 == sub_2DD20 )
    {
      v10 = (int *)sub_2CEC0(a2[2], (__int64)&stru_10000, 0x400u, 0x4000000);
      if ( v10 )
      {
        v12 = *v10;
        return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 **, _QWORD))(*(_QWORD *)a1[2] + 72LL))(
                 a1[2],
                 a1[3],
                 a1[4],
                 a2,
                 v11);
      }
    }
    else if ( !(unsigned int)v9((__int64)a2, &v12) )
    {
      return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 **, _QWORD))(*(_QWORD *)a1[2] + 72LL))(
               a1[2],
               a1[3],
               a1[4],
               a2,
               v11);
    }
    return 0;
  }
  result = v4((__int64)a2, &v11);
  if ( (int)result >= 0 )
    goto LABEL_14;
  return result;
}

