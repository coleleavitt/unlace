__int64 *__fastcall ida_mcp::get_function_name[abi:cxx11](__int64 *a1, __int64 a2)
{
  size_t v3; // rax
  _QWORD *v4; // rdx
  unsigned int v5; // ebp
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  char *v8; // rdx
  char *v9; // rax
  unsigned int v10; // ebp
  unsigned int v11; // ebp
  unsigned int v12; // edx
  __int64 v13; // rsi
  size_t v14; // [rsp+18h] [rbp-70h]
  __int128 v15; // [rsp+28h] [rbp-60h]
  _BYTE v16[8]; // [rsp+38h] [rbp-50h]
  char v17[40]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+68h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  if ( !a2 )
  {
    a1[1] = 0;
    *a1 = (__int64)(a1 + 2);
    *((_BYTE *)a1 + 16) = 0;
    return a1;
  }
  v15 = 0;
  if ( get_func_name() <= 0 )
  {
    qsnprintf();
    *a1 = (__int64)(a1 + 2);
    v3 = strlen(v17);
    v4 = a1 + 2;
    v14 = v3;
    v5 = v3;
    if ( v3 > 0xF )
    {
      v6 = std::string::_M_create();
      *a1 = v6;
      v4 = (_QWORD *)v6;
      a1[2] = v14;
    }
    else
    {
      if ( v3 == 1 )
      {
        *((_BYTE *)a1 + 16) = v17[0];
        goto LABEL_11;
      }
      if ( !v3 )
      {
LABEL_11:
        a1[1] = v3;
        *((_BYTE *)v4 + v3) = 0;
        return a1;
      }
    }
    if ( v5 >= 8 )
    {
      *v4 = *(_QWORD *)v17;
      *(_QWORD *)((char *)v4 + v5 - 8) = *(_QWORD *)&v16[v5];
      v7 = (unsigned __int64)(v4 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      v8 = (char *)v4 - v7;
      v9 = (char *)(v17 - v8);
      v10 = ((_DWORD)v8 + v5) & 0xFFFFFFF8;
      if ( v10 >= 8 )
      {
        v11 = v10 & 0xFFFFFFF8;
        v12 = 0;
        do
        {
          v13 = v12;
          v12 += 8;
          *(_QWORD *)(v7 + v13) = *(_QWORD *)&v9[v13];
        }
        while ( v12 < v11 );
      }
    }
    else if ( (v5 & 4) != 0 )
    {
      *(_DWORD *)v4 = *(_DWORD *)v17;
      *(_DWORD *)((char *)v4 + v5 - 4) = *(_DWORD *)&v16[v5 + 4];
    }
    else if ( v5 )
    {
      *(_BYTE *)v4 = v17[0];
      if ( (v5 & 2) != 0 )
        *(_WORD *)((char *)v4 + v5 - 2) = *(_WORD *)&v16[v5 + 6];
    }
    v3 = v14;
    v4 = (_QWORD *)*a1;
    goto LABEL_11;
  }
  if ( (_QWORD)v15 )
  {
    *a1 = (__int64)(a1 + 2);
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  *a1 = (__int64)(a1 + 2);
  a1[1] = 0;
  *((_BYTE *)a1 + 16) = 0;
  return a1;
}

