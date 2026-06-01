unsigned __int64 __fastcall sub_38D7B0(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, char **, void **, __int64),
        unsigned __int8 a3,
        __int64 *a4)
{
  __int64 v6; // rsi
  __int64 v8; // r13
  __int64 (__fastcall *v9)(_QWORD, _QWORD, _QWORD, _QWORD); // r8
  __int64 v10; // r13
  __int64 (__fastcall *v12)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+0h] [rbp-90h]
  __int64 v13; // [rsp+10h] [rbp-80h] BYREF
  void *src; // [rsp+18h] [rbp-78h]
  size_t n[3]; // [rsp+20h] [rbp-70h]
  void *v16; // [rsp+38h] [rbp-58h] BYREF
  __int128 v17; // [rsp+40h] [rbp-50h]
  unsigned __int64 v18; // [rsp+50h] [rbp-40h]

  v6 = *a4;
  v18 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  if ( (v6 & 0x100) != 0 )
    get_tinfo_pdata();
  v8 = operator new(0x40u);
  v16 = nullptr;
  sub_38C920(v8, 0, (__int64)&v16, (__int64)a4, -1);
  clear_tinfo_t();
  v9 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))**a2;
  v13 = v8;
  v17 = 0;
  v16 = nullptr;
  if ( n[0] )
  {
    v12 = v9;
    v16 = (void *)qalloc_or_throw();
    *((_QWORD *)&v17 + 1) = n[0];
    memcpy(v16, src, n[0]);
    *(_QWORD *)&v17 = n[0];
    v9 = v12;
  }
  v10 = v9(a2, &v16, &v13, 0);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  sub_38D110(a1, a2, a3, (__int64)a4, 0, v10);
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  return v18 - __readfsqword(0x28u);
}

