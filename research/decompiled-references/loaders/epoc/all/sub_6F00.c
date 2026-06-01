__int64 __fastcall sub_6F00(__int64 a1, unsigned __int64 a2, char *a3, unsigned __int64 a4)
{
  unsigned int v4; // ebp
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  int v9; // r8d
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // r13
  __int64 result; // rax
  unsigned int v15; // edx
  __int64 v16; // rcx

  v4 = a2;
  if ( (unsigned int)a2 >= *(unsigned __int16 *)(a1 + 8)
    || (v6 = (unsigned int)(a2 + 1), v6 >= *(_QWORD *)(a1 + 24))
    || (v7 = *(_QWORD *)(a1 + 16),
        a2 = a4,
        v9 = *(_DWORD *)(v7 + 4LL * v4),
        v10 = *(_DWORD *)(v7 + 4 * v6),
        v11 = *(_QWORD *)(a1 + 64),
        v12 = (unsigned int)(v9 + v11),
        v13 = (unsigned int)(v11 + v10),
        *(_QWORD *)(a1 + 48) < v13)
    || (unsigned int)v13 < (unsigned int)v12 )
  {
    sub_54E0((__int64)"corrupt data\n", a2);
  }
  else
  {
    LODWORD(result) = sub_66C0(a3, a2, (unsigned __int8 *)(*(_QWORD *)(a1 + 40) + v12), (unsigned int)(v10 - v9));
    v15 = *(unsigned __int16 *)(a1 + 8);
    if ( v4 < v15 && v6 < *(_QWORD *)(a1 + 24) )
    {
      v16 = 4096;
      if ( (_DWORD)v6 == v15 )
        v16 = *(_DWORD *)(a1 + 4) - (v4 << 12);
      result = (unsigned int)result;
      if ( (unsigned int)result == v16 )
      {
        *(_QWORD *)(a1 + 56) = v13;
        return result;
      }
    }
    sub_54E0((__int64)"error decompressing page\n");
  }
  return -1;
}
