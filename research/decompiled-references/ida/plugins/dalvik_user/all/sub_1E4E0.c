__int64 __fastcall sub_1E4E0(__int64 a1)
{
  const char *v2; // rdi
  unsigned int v3; // ebp
  unsigned int v5; // eax
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int128 v11; // [rsp+8h] [rbp-40h]
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v2 = (const char *)qword_7FBD0;
  if ( !(_QWORD)xmmword_7FBD8 )
    v2 = nptr;
  v3 = sub_1AAF0(v2);
  if ( (_BYTE)v3 )
  {
    v10 = 0;
    v11 = 0;
    v5 = sub_1E130(&v10, a1, (__int64)"start-server");
    v6 = v10;
    v3 = v5;
    if ( (_BYTE)v5 )
    {
      v7 = v11;
      if ( !(_QWORD)v11 )
      {
        if ( !v10 )
          return v3;
        goto LABEL_13;
      }
      v3 = 0;
      if ( (_QWORD)v11 == 2 && *(_QWORD *)(v10 + 32) )
        LOBYTE(v3) = strcmp(*(const char **)(v10 + 24), "* daemon started successfully *") == 0;
      if ( !v6 )
        return v3;
    }
    else
    {
      if ( !v10 )
        return v3;
      v7 = v11;
      if ( !(_QWORD)v11 )
        goto LABEL_13;
    }
    v8 = 0;
    do
    {
      v9 = (_QWORD *)(v6 + 24 * v8);
      if ( *v9 )
      {
        v9[1] = 0;
        qfree();
        v6 = v10;
      }
      ++v8;
    }
    while ( v8 != v7 );
LABEL_13:
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v3;
}

