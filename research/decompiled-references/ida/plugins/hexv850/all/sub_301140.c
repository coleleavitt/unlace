__int64 __fastcall sub_301140(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  bool (__fastcall *v3)(__int64); // rax
  __int64 v4; // rax
  int v5; // edx
  int v6; // ebx
  bool (__fastcall **v8)(__int64); // rcx
  bool (__fastcall *v9)(__int64); // rcx
  int v10; // ebx
  bool (__fastcall **v11)(__int64); // rax
  __int64 v12; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v13[5]; // [rsp+10h] [rbp-28h] BYREF

  v13[1] = __readfsqword(0x28u);
  if ( !sub_300CE0((__int64)a1) )
    return -1;
  if ( a2 >= a1[6] )
    sub_2A8A40(a1);
  v2 = a1[5] + 192 * a2;
  v3 = **(bool (__fastcall ***)(__int64))v2;
  if ( v3 != sub_2A7D00 )
  {
    if ( v3(v2) )
      goto LABEL_5;
    return -1;
  }
  if ( *(_DWORD *)(v2 + 40) != 1 )
    return -1;
LABEL_5:
  v4 = a1[9];
  v12 = v4;
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 104);
    *(_DWORD *)(v4 + 104) = v5 + 1;
    v6 = *(_DWORD *)(v2 + 184);
    if ( v6 != -2 )
    {
LABEL_7:
      sub_13B580(&v12, a2);
      return v6;
    }
    v8 = *(bool (__fastcall ***)(__int64))v2;
    v13[0] = v4;
    v9 = v8[2];
    *(_DWORD *)(v4 + 104) = v5 + 2;
  }
  else
  {
    v6 = *(_DWORD *)(v2 + 184);
    if ( v6 != -2 )
      goto LABEL_7;
    v11 = *(bool (__fastcall ***)(__int64))v2;
    v13[0] = 0;
    v9 = v11[2];
  }
  *(_DWORD *)(v2 + 184) = ((__int64 (__fastcall *)(__int64, _QWORD *))v9)(v2, v13);
  sub_13B580(v13, (__int64)v13);
  v10 = *(_DWORD *)(v2 + 184);
  sub_13B580(&v12, (__int64)v13);
  return v10;
}

