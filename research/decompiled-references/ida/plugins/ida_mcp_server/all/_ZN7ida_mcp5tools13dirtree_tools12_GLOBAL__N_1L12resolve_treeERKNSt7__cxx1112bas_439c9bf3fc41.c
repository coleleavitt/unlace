__int64 __fastcall ida_mcp::tools::dirtree_tools::`anonymous namespace'::resolve_tree(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12,
        int a13,
        int a14,
        __int64 a15)
{
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 result; // rax
  _QWORD *v21; // rax

  v15 = a1[1];
  switch ( v15 )
  {
    case 5LL:
      v21 = (_QWORD *)*a1;
      if ( *(_DWORD *)*a1 == 1668183398 && *((_BYTE *)v21 + 4) == 115
        || *(_DWORD *)v21 == 1701667182 && *((_BYTE *)v21 + 4) == 115 )
      {
        goto LABEL_12;
      }
      break;
    case 9LL:
      if ( *(_QWORD *)*a1 == 0x6E6F6974636E7566LL && *(_BYTE *)(*a1 + 8LL) == 115 )
        goto LABEL_12;
      break;
    case 7LL:
      if ( *(_DWORD *)*a1 == 1869639017 && *(_DWORD *)(*a1 + 3LL) == 1937011311 )
        goto LABEL_12;
      break;
    case 11LL:
      if ( *(_QWORD *)*a1 == 0x79745F6C61636F6CLL && *(_DWORD *)(*a1 + 7LL) == 1936027769 )
        goto LABEL_12;
      break;
    default:
      if ( v15 == 6 && *(_DWORD *)*a1 == 1887007852 && *(_WORD *)(*a1 + 4LL) == 29541 )
        goto LABEL_12;
      break;
  }
  if ( !(unsigned __int8)std::operator==<char>()
    && !(unsigned __int8)std::operator==<char>()
    && !(unsigned __int8)std::operator==<char>() )
  {
    ida_mcp::tools::dirtree_tools::`anonymous namespace'::resolve_tree(
      (__int64)a1,
      (__int64)"breakpoints",
      v16,
      v17,
      v18,
      v19,
      a7,
      a8,
      a9,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15);
  }
LABEL_12:
  result = get_std_dirtree();
  if ( !result )
    JUMPOUT(0x113B57);
  return result;
}

