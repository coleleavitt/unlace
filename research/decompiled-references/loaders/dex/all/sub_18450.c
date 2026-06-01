__int64 __fastcall sub_18450(__int64 a1, unsigned int a2, unsigned int a3, const char *a4)
{
  __int64 v4; // rbp
  size_t v7; // rax
  const char *v8; // rsi
  __int64 v9; // rbp
  unsigned int v10; // ebx
  size_t v12; // r15
  size_t v13; // r13
  void *v14; // [rsp+0h] [rbp-128h] BYREF
  __int128 v15; // [rsp+8h] [rbp-120h]
  _QWORD v16[2]; // [rsp+20h] [rbp-108h] BYREF
  __int128 v17; // [rsp+30h] [rbp-F8h]
  __int64 v18; // [rsp+40h] [rbp-E8h]
  __int64 v19; // [rsp+48h] [rbp-E0h]
  __int64 v20; // [rsp+50h] [rbp-D8h]
  __int128 v21; // [rsp+58h] [rbp-D0h]
  __int128 v22; // [rsp+68h] [rbp-C0h]
  __int128 v23; // [rsp+78h] [rbp-B0h]
  __int128 v24; // [rsp+88h] [rbp-A0h]
  __int128 v25; // [rsp+98h] [rbp-90h]
  __int128 v26; // [rsp+A8h] [rbp-80h]
  __int128 v27; // [rsp+B8h] [rbp-70h]
  __int128 v28; // [rsp+C8h] [rbp-60h]
  unsigned __int64 v29; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v30; // [rsp+E8h] [rbp-40h]

  v4 = a3;
  v30 = __readfsqword(0x28u);
  v14 = nullptr;
  v15 = 0;
  v7 = strlen(a4);
  if ( v7 )
  {
    v12 = v7 + 1;
    v13 = v7;
    v14 = (void *)qvector_reserve(&v14, 0, v7 + 1, 1);
    *(_QWORD *)&v15 = v12;
    memmove(v14, a4, v13);
    *((_BYTE *)v14 + v13) = 0;
  }
  if ( *(_DWORD *)a1 > 1u )
    sub_15D10((__int64 *)&v14, (__int64)"%d", *(_DWORD *)a1);
  set_selector(++qword_28408, 0);
  v19 = 0;
  v29 = 0xFFFFFFFF00000000LL;
  v8 = s1;
  v17 = 0;
  v20 = qword_28408;
  v9 = *(_QWORD *)(a1 + 152) + a2 + v4;
  v16[0] = *(_QWORD *)(a1 + 152) + a2;
  v18 = 0;
  v16[1] = v9;
  LOWORD(v19) = 513;
  BYTE3(v19) = 1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  if ( (_QWORD)v15 )
    v8 = (const char *)v14;
  v10 = add_segm_ex(v16, v8, "DATA", 33);
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14);
  }
  return v10;
}
