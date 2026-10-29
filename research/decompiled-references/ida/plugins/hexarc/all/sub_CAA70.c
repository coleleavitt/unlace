unsigned __int64 __fastcall sub_CAA70(__int64 a1, __int64 *a2)
{
  __int64 v3; // [rsp+0h] [rbp-A8h] BYREF
  __int64 v4; // [rsp+8h] [rbp-A0h]
  __int128 v5; // [rsp+10h] [rbp-98h]
  __int64 v6; // [rsp+20h] [rbp-88h]
  __int128 v7; // [rsp+28h] [rbp-80h]
  __int128 v8; // [rsp+38h] [rbp-70h]
  __int64 v9; // [rsp+48h] [rbp-60h]
  __int64 v10; // [rsp+50h] [rbp-58h]
  unsigned int *v11; // [rsp+58h] [rbp-50h] BYREF
  __int128 v12; // [rsp+60h] [rbp-48h]
  unsigned int *v13; // [rsp+70h] [rbp-38h] BYREF
  __int128 v14; // [rsp+78h] [rbp-30h]
  unsigned __int64 v15; // [rsp+88h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  v10 = a1;
  v3 = 0;
  v4 = 0;
  v6 = 0;
  v9 = 176;
  v11 = nullptr;
  v13 = nullptr;
  v5 = 0;
  v7 = 0;
  v8 = 0;
  v12 = 0;
  v14 = 0;
  sub_CA950((__int64)&v3, 0xB0u);
  sub_C8A70(a2, *(_DWORD **)(a1 + 112), &v11, (unsigned int *)0xFFFFFFFFFFFFFFFFLL);
  sub_C8A70(a2, *(_DWORD **)(a1 + 112), &v13, (unsigned int *)0xFFFFFFFFFFFFFFFFLL);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  if ( v6 )
  {
    *(_QWORD *)&v7 = 0;
    qfree();
  }
  if ( v4 )
  {
    *(_QWORD *)&v5 = 0;
    qfree();
  }
  return v15 - __readfsqword(0x28u);
}

