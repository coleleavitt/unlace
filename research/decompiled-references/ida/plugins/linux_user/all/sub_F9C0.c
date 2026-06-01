__int64 __fastcall sub_F9C0(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // r13d
  int v3; // eax
  size_t v5; // rax
  size_t v6; // rbp
  void *v7; // rdi
  size_t v8; // r15
  __int64 v9; // rax
  char s[1040]; // [rsp+10h] [rbp-1458h] BYREF
  unsigned __int64 v11; // [rsp+1428h] [rbp-40h]

  v2 = 0;
  v11 = __readfsqword(0x28u);
  qsnprintf();
  if ( qfopen() )
  {
    *a1 = 0;
    v3 = sub_F810();
    LOBYTE(v2) = v3 == 4;
    if ( a2 && v3 == 4 )
    {
      v5 = strlen(s);
      v6 = v5;
      if ( v5 )
      {
        v7 = *(void **)a2;
        v8 = v5 + 1;
        if ( *(_QWORD *)(a2 + 16) < v5 + 1 )
        {
          v9 = qvector_reserve();
          *(_QWORD *)a2 = v9;
          v7 = (void *)v9;
        }
        *(_QWORD *)(a2 + 8) = v8;
        memmove(v7, s, v6);
        *(_BYTE *)(*(_QWORD *)a2 + v6) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
    }
    qfclose();
  }
  return v2;
}

