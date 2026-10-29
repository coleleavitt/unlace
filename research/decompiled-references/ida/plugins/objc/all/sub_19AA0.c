unsigned __int64 __fastcall sub_19AA0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rax
  _QWORD **v7; // rbx
  void *v8; // rdi
  void *v10; // rax
  const void *v11; // rsi
  _QWORD v12[3]; // [rsp+10h] [rbp-B8h] BYREF
  int v13; // [rsp+28h] [rbp-A0h] BYREF
  void *v14; // [rsp+30h] [rbp-98h]
  int *v15; // [rsp+38h] [rbp-90h]
  int *v16; // [rsp+40h] [rbp-88h]
  __int64 v17; // [rsp+48h] [rbp-80h]
  void *v18; // [rsp+50h] [rbp-78h]
  __int128 v19; // [rsp+58h] [rbp-70h]
  __int64 v20; // [rsp+68h] [rbp-60h]
  int v21; // [rsp+70h] [rbp-58h]
  __int64 v22; // [rsp+78h] [rbp-50h]
  unsigned __int64 v23; // [rsp+88h] [rbp-40h]

  v2 = a1[1];
  v23 = __readfsqword(0x28u);
  if ( *(_BYTE *)(v2 + 2216) )
    sub_EC40();
  sub_198E0(a2);
  v4 = *(_QWORD *)(a2 + 120);
  v12[0] = &unk_3CB00;
  v5 = a1[1];
  v12[1] = 25;
  v13 = 0;
  v14 = 0;
  v15 = &v13;
  v16 = &v13;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( v4 )
  {
    v10 = (void *)qalloc_or_throw();
    v11 = *(const void **)(a2 + 112);
    v18 = v10;
    *((_QWORD *)&v19 + 1) = v4;
    memcpy(v10, v11, 16 * v4);
    *(_QWORD *)&v19 = v4;
  }
  v6 = *a1;
  v21 = -1;
  v20 = 0;
  v12[0] = &off_3C200;
  v22 = v5;
  (*(void (__fastcall **)(__int64 *, _QWORD *, __int64))(v6 + 368))(a1, v12, a2 + 112);
  v12[0] = &unk_3CB00;
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  v7 = (_QWORD **)v14;
  if ( v14 )
  {
    do
    {
      sub_10FE0(v7[3]);
      v8 = v7;
      v7 = (_QWORD **)v7[2];
      operator delete(v8, 0x28u);
    }
    while ( v7 );
  }
  return v23 - __readfsqword(0x28u);
}
