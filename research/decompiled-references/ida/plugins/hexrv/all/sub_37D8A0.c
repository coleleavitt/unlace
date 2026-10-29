__int64 __fastcall sub_37D8A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void (__fastcall *v6)(__int64, __int64); // rbx
  __int64 path; // rax
  _BYTE *v8; // rcx
  char v9; // al
  __int64 v10; // rdx
  char *v11; // r13
  char v12; // bp
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r12
  char *v19; // [rsp+20h] [rbp-68h] BYREF
  __int128 v20; // [rsp+28h] [rbp-60h]
  __int64 v21; // [rsp+40h] [rbp-48h]
  __int128 v22; // [rsp+48h] [rbp-40h]
  unsigned __int64 v23; // [rsp+58h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  ((void (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))callui)(12, a2, a3, a4, a5, a6);
  v6 = (void (__fastcall *)(__int64, __int64))callui;
  path = get_path();
  v6(13, path);
  if ( getinf_str() > 0 )
  {
    v8 = nullptr;
    v9 = unk_0;
    if ( unk_0 )
    {
      v10 = 0;
      do
      {
        if ( v9 != 13 )
          *v8++ = v9;
        v9 = *(_BYTE *)++v10;
      }
      while ( v9 );
    }
    *v8 = 0;
  }
  v19 = nullptr;
  v20 = 0;
  if ( (unsigned __int8)sub_37D7E0((__int64)&v19, 1023999, (__int64)s1, (__int64)"Please enter your notes") )
  {
    v11 = v19;
    v21 = 0;
    v22 = 0;
    v12 = *v19;
    if ( *v19 )
    {
      v13 = 0;
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        if ( v12 == 10 )
        {
          v17 = 2;
          if ( v15 )
            v17 = v15-- + 1;
          if ( v14 < v17 )
          {
            v21 = qvector_reserve();
            v13 = v21;
          }
          *(_QWORD *)&v22 = v17;
          *(_BYTE *)(v13 + v15) = 13;
          *(_BYTE *)(v21 + v15 + 1) = 0;
          v14 = *((_QWORD *)&v22 + 1);
          v15 = v22;
          v13 = v21;
        }
        v16 = 2;
        if ( v15 )
          v16 = v15-- + 1;
        if ( v14 < v16 )
        {
          v21 = qvector_reserve();
          v13 = v21;
        }
        *(_QWORD *)&v22 = v16;
        ++v11;
        *(_BYTE *)(v13 + v15) = v12;
        *(_BYTE *)(v21 + v15 + 1) = 0;
        v12 = *v11;
        v15 = v22;
        if ( !*v11 )
          break;
        v14 = *((_QWORD *)&v22 + 1);
        v13 = v21;
      }
      if ( (_QWORD)v22 && (unsigned __int64)(v22 - 1) > 0xF9FFF )
      {
        *(_QWORD *)&v22 = 1024000;
        *(_BYTE *)(v21 + 1023999) = 0;
      }
    }
    setinf_buf();
    if ( v21 )
    {
      *(_QWORD *)&v22 = 0;
      qfree();
    }
  }
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return 0;
}

