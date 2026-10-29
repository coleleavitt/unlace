ida_mcp::tools::xtensa_options::_anonymous_namespace_ *__fastcall ida_mcp::tools::xtensa_options::`anonymous namespace'::format_hex32(
        ida_mcp::tools::xtensa_options::_anonymous_namespace_ *this)
{
  char *v1; // rbp
  size_t v2; // rax
  unsigned __int64 v4; // rdx
  char *v5; // rbp
  char *v6; // r12
  unsigned int v7; // ebp
  unsigned int v8; // ebp
  unsigned int v9; // ecx
  __int64 v10; // rsi
  _BYTE v11[8]; // [rsp+0h] [rbp-40h]
  _QWORD v12[7]; // [rsp+8h] [rbp-38h] BYREF

  v1 = (char *)this + 16;
  v12[3] = __readfsqword(0x28u);
  __snprintf_chk();
  *(_QWORD *)this = (char *)this + 16;
  v2 = strlen((const char *)v12);
  if ( v2 == 1 )
  {
    *((_BYTE *)this + 16) = v12[0];
  }
  else if ( v2 )
  {
    if ( (unsigned int)v2 < 8 )
    {
      if ( (v2 & 4) != 0 )
      {
        *((_DWORD *)this + 4) = v12[0];
        *(_DWORD *)&v1[(unsigned int)v2 - 4] = *(_DWORD *)&v11[(unsigned int)v2 + 4];
      }
      else if ( (_DWORD)v2 )
      {
        *((_BYTE *)this + 16) = v12[0];
        if ( (v2 & 2) != 0 )
          *(_WORD *)&v1[(unsigned int)v2 - 2] = *(_WORD *)&v11[(unsigned int)v2 + 6];
      }
    }
    else
    {
      *((_QWORD *)this + 2) = v12[0];
      *(_QWORD *)&v1[(unsigned int)v2 - 8] = *(_QWORD *)&v11[(unsigned int)v2];
      v4 = ((unsigned __int64)this + 24) & 0xFFFFFFFFFFFFFFF8LL;
      v5 = &v1[-v4];
      v6 = (char *)((char *)v12 - v5);
      v7 = (v2 + (_DWORD)v5) & 0xFFFFFFF8;
      if ( v7 >= 8 )
      {
        v8 = v7 & 0xFFFFFFF8;
        v9 = 0;
        do
        {
          v10 = v9;
          v9 += 8;
          *(_QWORD *)(v4 + v10) = *(_QWORD *)&v6[v10];
        }
        while ( v9 < v8 );
      }
    }
  }
  *((_QWORD *)this + 1) = v2;
  *((_BYTE *)this + v2 + 16) = 0;
  return this;
}

