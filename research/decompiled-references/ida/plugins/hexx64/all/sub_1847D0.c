__int64 __fastcall sub_1847D0(__int64 a1, char *a2, __int64 a3, char *a4, double a5)
{
  unsigned __int8 v6; // al
  char *v8; // rdi
  char v9; // r13
  int v10; // eax
  int v11; // ebp
  const char *v12; // rsi
  char *v13; // rdi
  char *v14; // rbx
  unsigned __int64 v15; // rbx
  unsigned __int64 v17; // rax
  char v18; // cl
  int v19; // edx
  __int64 bytes; // rax
  char *v21; // rdi
  char v22; // dl
  char *v23; // rax
  char v24; // al
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v26; // [rsp+8h] [rbp-40h]
  unsigned __int64 v27; // [rsp+18h] [rbp-30h]

  v6 = *a4;
  v27 = __readfsqword(0x28u);
  if ( v6 != 4 )
  {
    if ( v6 <= 4u )
    {
      if ( v6 == 2 )
      {
        v11 = *((_DWORD *)a4 + 1);
        v17 = sub_32ABC0(*(_QWORD *)(*((_QWORD *)a4 + 1) + 16LL), v11, 0);
        v18 = v17;
        if ( v11 <= 1 )
        {
LABEL_34:
          *a2 = v18;
          return (unsigned int)v11;
        }
        v19 = 1;
        while ( 1 )
        {
          v17 >>= 8;
          if ( v18 != (_BYTE)v17 )
            break;
          if ( v11 == ++v19 )
            goto LABEL_34;
        }
      }
      else if ( v6 == 3 )
      {
        v8 = *((char **)a4 + 1);
        s1 = v8 + 1;
        if ( !*v8 )
          sub_183360(a5);
        v9 = *v8;
        if ( *v8 == 92 )
        {
          v24 = back_char();
          v8 = *((char **)a4 + 1);
          v9 = v24;
        }
        s1 = nullptr;
        v26 = 0;
        v10 = sub_331FE0(v8, nullptr);
        sub_183D60((__int64)&s1, v9, v10);
        v11 = v26;
        v12 = *((const char **)a4 + 1);
        v13 = (char *)::s1;
        v14 = s1;
        if ( (_QWORD)v26 )
          v13 = s1;
        if ( !strcmp(v13, v12) )
        {
          *a2 = v9;
          if ( v14 )
          {
            *(_QWORD *)&v26 = 0;
            qfree((__int64)v14);
          }
          return (unsigned int)v11;
        }
        if ( v14 )
        {
          *(_QWORD *)&v26 = 0;
          qfree((__int64)v14);
        }
      }
      return 0;
    }
    if ( v6 != 6 )
      return 0;
    v11 = *((_DWORD *)a4 + 1);
    v15 = *((_QWORD *)a4 + 1);
    if ( (unsigned __int8)is_spec_ea() || (unsigned int)sub_343460(a1, v15, v11) != 1 )
      return 0;
    s1 = nullptr;
    v26 = 0;
    if ( v11 )
    {
      s1 = (char *)qvector_reserve((__int64)&s1, 0, v11, 1);
      memset(&s1[v26], 0, v11 - (_QWORD)v26);
      *(_QWORD *)&v26 = v11;
    }
    bytes = get_bytes();
    v21 = s1;
    if ( v11 == bytes )
    {
      v22 = *s1;
      if ( v11 <= 1 )
      {
LABEL_37:
        *a2 = v22;
LABEL_32:
        if ( v21 )
        {
          *(_QWORD *)&v26 = 0;
          qfree((__int64)v21);
        }
        return (unsigned int)v11;
      }
      v23 = s1 + 1;
      while ( v22 == *v23 )
      {
        if ( &s1[v11 - 2 + 2] == ++v23 )
          goto LABEL_37;
      }
    }
    v11 = 0;
    goto LABEL_32;
  }
  return sub_184590(a1, a2, a3, *((_QWORD *)a4 + 1), a5);
}

