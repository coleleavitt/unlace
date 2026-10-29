__int64 __fastcall sub_406B0(__int64 a1, signed int a2)
{
  __int64 result; // rax
  __int64 v3; // r9
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD **v7; // rbp
  __int64 v8; // rbx
  void *v9; // rdi
  int v10; // [rsp+8h] [rbp-80h] BYREF
  __int64 v11; // [rsp+10h] [rbp-78h]
  int *v12; // [rsp+18h] [rbp-70h]
  int *v13; // [rsp+20h] [rbp-68h]
  __int64 v14; // [rsp+28h] [rbp-60h]
  int v15[4]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+40h] [rbp-48h] BYREF
  void *v17; // [rsp+48h] [rbp-40h]
  int *v18; // [rsp+50h] [rbp-38h]
  int *v19; // [rsp+58h] [rbp-30h]
  __int64 v20; // [rsp+60h] [rbp-28h]
  unsigned __int64 v21; // [rsp+68h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  result = sub_3F960(a1, a2);
  if ( !result && (unsigned int)a2 <= 0x3FF )
  {
    v4 = *(_DWORD *)(v3 + 4196);
    v15[0] = a2;
    v5 = a2 + 8LL;
    v10 = 0;
    *(_DWORD *)(v3 + 4 * v5 + 8) = v4;
    *(_BYTE *)(v3 + 4 * v5 + 8) = v4 | 1;
    v12 = &v10;
    v13 = &v10;
    v11 = 0;
    v14 = 0;
    v16 = 0;
    v17 = nullptr;
    v18 = &v16;
    v19 = &v16;
    v20 = 0;
    v6 = sub_404E0((_QWORD *)(v3 + 4136), v15);
    v7 = (_QWORD **)v17;
    v8 = v6;
    if ( v17 )
    {
      do
      {
        sub_3F4D0(v7[3]);
        v9 = v7;
        v7 = (_QWORD **)v7[2];
        operator delete(v9, 0x28u);
      }
      while ( v7 );
    }
    return v8 + 40;
  }
  return result;
}

