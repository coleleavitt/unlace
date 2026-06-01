__int64 __fastcall sub_13AB30(__int64 a1, _DWORD *a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v6; // ebp
  int v8; // edx
  __int64 v9; // rdi
  __int64 v11; // rax
  __int64 v12[6]; // [rsp+0h] [rbp-B8h] BYREF
  __int64 (__fastcall **v13)(); // [rsp+30h] [rbp-88h]
  __int64 v14; // [rsp+38h] [rbp-80h]
  __int64 v15; // [rsp+40h] [rbp-78h]
  __int64 v16; // [rsp+48h] [rbp-70h]
  __int64 v17; // [rsp+50h] [rbp-68h]
  char v18; // [rsp+58h] [rbp-60h]
  __int64 v19; // [rsp+60h] [rbp-58h]
  __int64 v20; // [rsp+68h] [rbp-50h]
  __int64 v21; // [rsp+70h] [rbp-48h] BYREF
  int v22; // [rsp+78h] [rbp-40h]
  unsigned __int64 v23; // [rsp+88h] [rbp-30h]

  v6 = 0;
  v8 = a1;
  v9 = *(_QWORD *)(a1 + 1496);
  v23 = __readfsqword(0x28u);
  sub_33E5A0(v9, 15, v8, a4, a5, a6, v12[0]);
  if ( *(int *)(a1 + 312) <= 6 )
  {
    v11 = *(_QWORD *)(a1 + 1504);
    v14 = 0;
    v15 = 0;
    v12[5] = v11;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = v11;
    LODWORD(v11) = *(_DWORD *)(v11 + 56);
    memset(&v12[1], 0, 32);
    v12[0] = (__int64)off_4D8320;
    v13 = off_4D82F8;
    v20 = 0;
    v21 = 0x200000001LL;
    v22 = v11;
    sub_11F420(a1, v12);
    if ( (_DWORD)v20 )
      sub_669A0(a1, 1u, (__int64)"resolve_stkvar_addresses result");
    if ( a2 )
      *a2 = v20;
    v12[0] = (__int64)off_4D8320;
    v6 = HIDWORD(v20);
    v13 = off_4D82F8;
    sub_11C7E0((__int64)&v21);
  }
  return v6;
}

