__int64 __fastcall sub_4FD40(__int64 a1, __int64 **a2, double a3, double a4, double a5)
{
  __int64 *v6; // rax
  __int64 (__fastcall *v8)(__int64, int *); // rax
  int *v9; // rax
  int v10; // eax
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, unsigned int *); // rax
  unsigned int *v14; // rax
  unsigned int v15; // eax
  __int64 (__fastcall *v16)(__int64, int *); // rax
  int *v17; // rax
  __int64 *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rsi
  int v22; // r8d
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned int v26; // [rsp+10h] [rbp-28h] BYREF
  int v27; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-20h]

  v6 = *a2;
  v28 = __readfsqword(0x28u);
  v25 = 0;
  v8 = (__int64 (__fastcall *)(__int64, int *))v6[23];
  if ( v8 == sub_2DCC0 )
  {
    v9 = (int *)sub_2CEC0(a2[2], 0x100000, 0x400u, 0x4000000);
    if ( v9 )
    {
      v10 = *v9;
      v25 = v10;
      goto LABEL_4;
    }
LABEL_20:
    v10 = v25;
LABEL_4:
    if ( v10 == 6 )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 320LL);
      *(_QWORD *)(a1 + 8) = a2;
      return (*(__int64 (__fastcall **)(__int64, __int64 **, _QWORD, __int64))(*(_QWORD *)v12 + 16LL))(v12, a2, 0, a1);
    }
    if ( (unsigned int)(v10 - 21) <= 1 )
      return 0;
    v13 = (__int64 (__fastcall *)(__int64, unsigned int *))(*a2)[9];
    if ( v13 == sub_2DCF0 )
    {
      v14 = (unsigned int *)sub_2CEC0(a2[2], 0x8000, 0x400u, 0x4000000);
      if ( !v14 )
        return 0;
      v15 = *v14;
      v26 = v15;
    }
    else
    {
      if ( (unsigned int)v13((__int64)a2, &v26) )
        return 0;
      v15 = v26;
    }
    if ( v15 == 3 )
    {
      v16 = (__int64 (__fastcall *)(__int64, int *))(*a2)[16];
      if ( v16 == sub_2DD20 )
      {
        v17 = (int *)sub_2CEC0(a2[2], (__int64)&stru_10000, 0x400u, 0x4000000);
        if ( v17 )
        {
          v27 = *v17;
LABEL_16:
          v18 = *(__int64 **)(a1 + 16);
          v19 = v18[1];
          v20 = *v18;
          if ( v18[2] < (unsigned __int64)(v19 + 1) )
          {
            v24 = qvector_reserve(*(_QWORD *)(a1 + 16), v20, v19 + 1, 80);
            *v18 = v24;
            v20 = v24;
            v19 = v18[1];
          }
          v21 = 80 * v19 + v20;
          *(_DWORD *)v21 = 0;
          v22 = v27;
          *(_QWORD *)(v21 + 8) = 0;
          v23 = v26;
          *(_QWORD *)(v21 + 16) = 0;
          *(_QWORD *)(v21 + 40) = 0;
          *(_QWORD *)(v21 + 64) = 0;
          *(_DWORD *)(v21 + 72) = 0;
          *(_OWORD *)(v21 + 24) = 0;
          *(_OWORD *)(v21 + 48) = 0;
          ++v18[1];
          *(_DWORD *)(a1 + 32) = sub_4F830(*(_QWORD *)(a1 + 24), v21, a2, 0.0, a4, a5, v23, v22, *(_DWORD *)(a1 + 32));
        }
      }
      else if ( !(unsigned int)v16((__int64)a2, &v27) )
      {
        goto LABEL_16;
      }
    }
    return 0;
  }
  result = v8((__int64)a2, &v25);
  if ( (int)result >= 0 )
    goto LABEL_20;
  return result;
}

