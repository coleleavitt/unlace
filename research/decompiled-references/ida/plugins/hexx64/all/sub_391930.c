unsigned __int64 __fastcall sub_391930(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, char **, void **, __int64),
        char a3,
        __int64 *a4)
{
  __int64 v6; // rsi
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(_QWORD, _QWORD, _QWORD, _QWORD); // r8
  __int64 v12; // r13
  __int64 (__fastcall *v14)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+0h] [rbp-90h]
  __int64 v15; // [rsp+10h] [rbp-80h] BYREF
  void *src; // [rsp+18h] [rbp-78h]
  size_t n[3]; // [rsp+20h] [rbp-70h]
  void *v18; // [rsp+38h] [rbp-58h] BYREF
  __int128 v19; // [rsp+40h] [rbp-50h]
  unsigned __int64 v20; // [rsp+50h] [rbp-40h]

  v6 = *a4;
  v20 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( (v6 & 0x100) != 0 )
    get_tinfo_pdata();
  v8 = operator new(0x40u);
  v18 = nullptr;
  sub_390AA0(v8, 0, (__int64)&v18, (__int64)a4, -1);
  clear_tinfo_t();
  v11 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))**a2;
  v15 = v8;
  v19 = 0;
  v18 = nullptr;
  if ( n[0] )
  {
    v14 = v11;
    v18 = (void *)qalloc_or_throw(n[0], 0, v9, v10);
    *((_QWORD *)&v19 + 1) = n[0];
    memcpy(v18, src, n[0]);
    *(_QWORD *)&v19 = n[0];
    v11 = v14;
  }
  v12 = v11(a2, &v18, &v15, 0);
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree((__int64)v18);
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  sub_391290(a1, a2, a3, (__int64)a4, 0, v12);
  if ( src )
  {
    n[0] = 0;
    qfree((__int64)src);
  }
  return v20 - __readfsqword(0x28u);
}

