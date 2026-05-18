__int64 sub_2FCC0()
{
  __int64 result; // rax
  __int64 v1; // rbx
  const void *v2; // rbp
  void *v3; // rdi
  __int64 v4; // rax
  const char *v5; // rsi
  void *ptr; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v7; // [rsp+8h] [rbp-B0h]
  void *v8; // [rsp+20h] [rbp-98h] BYREF
  __int128 v9; // [rsp+28h] [rbp-90h]
  __int16 v10; // [rsp+38h] [rbp-80h]
  char v11; // [rsp+3Ah] [rbp-7Eh]
  char v12; // [rsp+40h] [rbp-78h]
  void *dest; // [rsp+48h] [rbp-70h] BYREF
  __int128 v14; // [rsp+50h] [rbp-68h]
  void *v15; // [rsp+60h] [rbp-58h] BYREF
  __int128 v16; // [rsp+68h] [rbp-50h]
  int v17; // [rsp+80h] [rbp-38h] BYREF
  __int16 v18; // [rsp+84h] [rbp-34h]
  __int64 v19; // [rsp+88h] [rbp-30h]
  __int64 v20; // [rsp+90h] [rbp-28h]
  unsigned __int64 v21; // [rsp+98h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  result = qword_241988;
  if ( !qword_241988 )
  {
    qword_241988 = sub_4D650();
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)qword_241988 + 24LL))(
            qword_241988,
            qword_241A48,
            0) )
    {
      if ( !unk_2439A0 )
        sub_198E10(3180);
      BUG();
    }
    v8 = nullptr;
    v10 = 0;
    v11 = 1;
    v12 = 0;
    dest = nullptr;
    v15 = nullptr;
    v9 = 0;
    v14 = 0;
    v16 = 0;
    sub_2DC20((__int64 *)&v15, "lumina_server*.hexlic");
    v1 = qword_241A18;
    if ( (unsigned __int64)qword_241A18 <= 1 )
    {
      sub_2DC20((__int64 *)&dest, "lumina_server*.hexlic");
    }
    else
    {
      v2 = qword_241A10;
      v3 = dest;
      if ( *((_QWORD *)&v14 + 1) < (unsigned __int64)qword_241A18 )
      {
        dest = (void *)sub_1987B0(&dest, dest, qword_241A18, 1);
        v3 = dest;
      }
      *(_QWORD *)&v14 = v1;
      memmove(v3, v2, v1 - 1);
      *((char *)dest + v1 - 1) = 0;
    }
    ptr = nullptr;
    v7 = 0;
    v4 = *(_QWORD *)qword_241988;
    v18 = 0;
    v19 = 0xA00000005LL;
    v17 = 0;
    v20 = 0;
    if ( (*(unsigned int (__fastcall **)(__int64, void **, int *, __int64, void **))(v4 + 32))(
           qword_241988,
           &v8,
           &v17,
           16,
           &ptr) )
    {
      v5 = s1;
      if ( (_QWORD)v7 )
        v5 = (const char *)ptr;
      sub_2F260((__int64)"Could not acquire license: %s", v5);
    }
    if ( ptr )
    {
      *(_QWORD *)&v7 = 0;
      j__free(ptr);
    }
    if ( v15 )
    {
      *(_QWORD *)&v16 = 0;
      j__free(v15);
    }
    if ( dest )
    {
      *(_QWORD *)&v14 = 0;
      j__free(dest);
    }
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      j__free(v8);
    }
    return qword_241988;
  }
  return result;
}
