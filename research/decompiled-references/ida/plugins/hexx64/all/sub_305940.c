__int64 __fastcall sub_305940(_QWORD *a1, unsigned __int64 a2, double a3, double a4, __m128i a5, double a6)
{
  __int64 v6; // rbp
  bool (__fastcall *v7)(__int64); // rax
  __int64 v8; // rax
  int v9; // edx
  int v10; // ebx
  bool (__fastcall **v12)(__int64); // rcx
  bool (__fastcall *v13)(__int64); // rcx
  int v14; // ebx
  bool (__fastcall **v15)(__int64); // rax
  __int64 *v16; // [rsp+8h] [rbp-30h] BYREF
  __int64 *v17[5]; // [rsp+10h] [rbp-28h] BYREF

  v17[1] = (__int64 *)__readfsqword(0x28u);
  if ( !sub_3054E0((__int64)a1, a3, a4, a5, a6) )
    return -1;
  if ( a2 >= a1[6] )
    sub_2ADE00(a3);
  v6 = a1[5] + 192 * a2;
  v7 = **(bool (__fastcall ***)(__int64))v6;
  if ( v7 != sub_2AD0E0 )
  {
    if ( v7(v6) )
      goto LABEL_5;
    return -1;
  }
  if ( (unsigned int)(*(_DWORD *)(v6 + 40) - 3) > 1 )
    return -1;
LABEL_5:
  v8 = a1[9];
  v16 = (__int64 *)v8;
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 104);
    *(_DWORD *)(v8 + 104) = v9 + 1;
    v10 = *(_DWORD *)(v6 + 184);
    if ( v10 != -2 )
    {
LABEL_7:
      sub_140140(&v16);
      return v10;
    }
    v12 = *(bool (__fastcall ***)(__int64))v6;
    v17[0] = (__int64 *)v8;
    v13 = v12[2];
    *(_DWORD *)(v8 + 104) = v9 + 2;
  }
  else
  {
    v10 = *(_DWORD *)(v6 + 184);
    if ( v10 != -2 )
      goto LABEL_7;
    v15 = *(bool (__fastcall ***)(__int64))v6;
    v17[0] = nullptr;
    v13 = v15[2];
  }
  *(_DWORD *)(v6 + 184) = ((__int64 (__fastcall *)(__int64, __int64 **))v13)(v6, v17);
  sub_140140(v17);
  v14 = *(_DWORD *)(v6 + 184);
  sub_140140(&v16);
  return v14;
}

