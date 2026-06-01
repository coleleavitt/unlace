__int64 __fastcall sub_309BB0(_QWORD *a1, unsigned __int64 a2, double a3, double a4, __m128i a5, double a6)
{
  __int64 v6; // rbx
  bool (__fastcall *v7)(__int64); // rax
  __int64 v8; // rax
  int v9; // edx
  int v10; // ebp
  bool (__fastcall **v12)(__int64); // rax
  bool (__fastcall *v13)(__int64); // rcx
  bool (__fastcall **v14)(__int64); // rcx
  __int64 *v15; // [rsp+8h] [rbp-30h] BYREF
  __int64 *v16[5]; // [rsp+10h] [rbp-28h] BYREF

  v16[1] = (__int64 *)__readfsqword(0x28u);
  if ( sub_309760((__int64)a1, a3, a4, a5, a6) )
  {
    if ( a2 >= a1[6] )
      sub_2ADE00(a3);
    v6 = a1[5] + 80 * a2;
    v7 = **(bool (__fastcall ***)(__int64))v6;
    if ( v7 == sub_2AD100 )
    {
      if ( *(_QWORD *)(v6 + 8) != *(_QWORD *)(v6 + 56) )
        goto LABEL_5;
      if ( *(_DWORD *)(v6 + 16) != *(_DWORD *)(v6 + 64) )
      {
        v8 = a1[9];
        v15 = (__int64 *)v8;
        if ( v8 )
          goto LABEL_6;
        goto LABEL_12;
      }
    }
    else if ( v7(v6) )
    {
LABEL_5:
      v8 = a1[9];
      v15 = (__int64 *)v8;
      if ( v8 )
      {
LABEL_6:
        v9 = *(_DWORD *)(v8 + 104);
        *(_DWORD *)(v8 + 104) = v9 + 1;
        v10 = *(_DWORD *)(v6 + 72);
        if ( v10 != -2 )
        {
LABEL_7:
          sub_140140(&v15);
          return v10;
        }
        v14 = *(bool (__fastcall ***)(__int64))v6;
        v16[0] = (__int64 *)v8;
        v13 = v14[2];
        *(_DWORD *)(v8 + 104) = v9 + 2;
LABEL_15:
        *(_DWORD *)(v6 + 72) = ((__int64 (__fastcall *)(__int64, __int64 **))v13)(v6, v16);
        sub_140140(v16);
        v10 = *(_DWORD *)(v6 + 72);
        goto LABEL_7;
      }
LABEL_12:
      v10 = *(_DWORD *)(v6 + 72);
      if ( v10 != -2 )
        goto LABEL_7;
      v12 = *(bool (__fastcall ***)(__int64))v6;
      v16[0] = nullptr;
      v13 = v12[2];
      goto LABEL_15;
    }
  }
  return -1;
}

