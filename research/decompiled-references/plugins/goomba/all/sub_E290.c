__int64 __fastcall sub_E290(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  __int64 *v5; // rcx
  __int64 v6; // rbp
  unsigned int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  _QWORD *v12; // rdx
  unsigned int v13; // edx
  __int64 *v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rdx
  void (__fastcall *hexdsp)(__int64, __int64, __int64 (__fastcall ***)()); // rax
  __int64 v18; // rdx
  __int64 *v19; // rcx
  void (__fastcall *v20)(__int64, __int64, __int64, _QWORD, __int64, __int64, __int64 (__fastcall **)(), __int64, __int64, __int64, __int64, __int64); // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 (__fastcall **v23)(); // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+8h] [rbp-50h]
  __int64 v25; // [rsp+10h] [rbp-48h]
  __int64 v26; // [rsp+18h] [rbp-40h]
  __int64 v27; // [rsp+20h] [rbp-38h]
  __int64 v28; // [rsp+28h] [rbp-30h]
  int v29; // [rsp+30h] [rbp-28h]
  unsigned __int64 v30; // [rsp+38h] [rbp-20h]

  v30 = __readfsqword(0x28u);
  if ( (_DWORD)a2 != 7 )
  {
    if ( (_DWORD)a2 != 110 )
    {
      if ( (_DWORD)a2 == 3 )
      {
        v4 = *(_DWORD *)a3;
        if ( v4 > 0x2F )
        {
          v5 = *(__int64 **)(a3 + 8);
          *(_QWORD *)(a3 + 8) = v5 + 1;
        }
        else
        {
          v5 = (__int64 *)(*(_QWORD *)(a3 + 16) + v4);
          *(_DWORD *)a3 = v4 + 8;
        }
        v6 = *v5;
        if ( (unsigned __int8)qgetenv("VD_MBA_AUTO", 0) || *(_BYTE *)(a1 + 104) )
        {
          *(_BYTE *)(a1 + 184) = 1;
        }
        else if ( !*(_BYTE *)(a1 + 184) )
        {
          return 0;
        }
        *(_DWORD *)(v6 + 4) |= 0x8000u;
      }
      return 0;
    }
    v8 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v19 = *(__int64 **)(a3 + 8);
      v12 = v19 + 1;
      *(_QWORD *)(a3 + 8) = v19 + 1;
      v11 = *v19;
    }
    else
    {
      v9 = *(_QWORD *)(a3 + 16);
      v10 = v8 + 8;
      *(_DWORD *)a3 = v10;
      v11 = *(_QWORD *)(v9 + v8);
      if ( (unsigned int)v10 <= 0x2F )
      {
        v12 = (_QWORD *)(v10 + v9);
        *(_DWORD *)a3 = v8 + 16;
LABEL_13:
        callui(131, v11, *v12, "goomba:run", 0, 0, v23, v24, v25, v26);
        return 0;
      }
      v12 = *(_QWORD **)(a3 + 8);
    }
    *(_QWORD *)(a3 + 8) = v12 + 1;
    goto LABEL_13;
  }
  v13 = *(_DWORD *)a3;
  if ( v13 > 0x2F )
  {
    v14 = *(__int64 **)(a3 + 8);
    *(_QWORD *)(a3 + 8) = v14 + 1;
  }
  else
  {
    v14 = (__int64 *)(*(_QWORD *)(a3 + 16) + v13);
    *(_DWORD *)a3 = v13 + 8;
  }
  if ( !*(_BYTE *)(a1 + 184) )
    return 0;
  v15 = *v14;
  sub_E0B0(a1);
  v24 = 0;
  v23 = off_4D730;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = a1 + 160;
  v29 = 0;
  hexdsp = (void (__fastcall *)(__int64, __int64, __int64 (__fastcall ***)()))get_hexdsp(a1, a2, v16);
  hexdsp(412, v15, &v23);
  *(_BYTE *)(a1 + 184) = 0;
  *(_DWORD *)(v15 + 4) &= ~0x8000u;
  if ( !v29 )
    return 0;
  v20 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, __int64, __int64 (__fastcall **)(), __int64, __int64, __int64, __int64, __int64))get_hexdsp(412, v15, v18);
  v20(403, v15, 1, v20, v21, v22, v23, v24, v25, v26, v27, v28);
  sub_C720((__int64)"goomba: completed mba optimization pass, improved %d expressions\n", v29);
  return -36;
}
