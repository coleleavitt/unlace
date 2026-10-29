__int64 __fastcall sub_28B690(_QWORD *a1, __int64 a2, double a3)
{
  unsigned int v3; // edx
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  _QWORD *v9; // [rsp+10h] [rbp-48h] BYREF
  __int64 v10; // [rsp+18h] [rbp-40h]
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+30h] [rbp-28h]
  int v13; // [rsp+34h] [rbp-24h]
  unsigned __int64 v14; // [rsp+38h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  sub_283C00(&v9, a1, a2, a3);
  v3 = 0;
  if ( *v9 != v10 )
  {
    v4 = *(_DWORD *)(a2 + 12);
    v5 = *(_QWORD *)(v10 + 8);
    v13 = 0;
    v6 = a1[8];
    v12 = v4;
    v11[0] = &off_4E0CB8;
    v11[1] = v6;
    v8 = v5;
    sub_280F80((__int64)v9, &v8, (__int64)v11, a3);
    LOBYTE(v3) = v13 != 0;
  }
  return v3;
}

