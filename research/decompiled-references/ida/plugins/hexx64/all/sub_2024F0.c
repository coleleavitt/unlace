__int64 __fastcall sub_2024F0(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4, double a5, __m128 a6)
{
  _BYTE *v6; // rax
  __int64 v7; // r15
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  __int64 v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v6 = *(_BYTE **)(a1 + 64);
  v17 = __readfsqword(0x28u);
  if ( (*v6 & 1) == 0 || !*(_DWORD *)(a1 + 72) )
    return *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(a1 + 76) == 1 )
  {
    if ( !under_debugger )
      sub_383060(0xC49Du, a5);
    BUG();
  }
  v11 = (_DWORD *)sub_201E10((_QWORD *)a1, a2, 1, a5, a6);
  v12 = v11;
  if ( v11 )
  {
    if ( (unsigned int)(*v11 - 42) <= 0xC )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
      while ( 1 )
      {
        while ( 1 )
        {
          while ( *((_BYTE *)v12 + 32) == 4 && (unsigned __int8)sub_1205A0(*((_BYTE **)v12 + 5), v13, 0) )
            v12 = *((_DWORD **)v12 + 5);
          if ( *((_BYTE *)v12 + 48) != 4 || !(unsigned __int8)sub_1205A0(*((_BYTE **)v12 + 7), v13, 0) )
            break;
          v12 = *((_DWORD **)v12 + 7);
        }
        if ( *((_BYTE *)v12 + 64) != 4 || !(unsigned __int8)sub_1205A0(*((_BYTE **)v12 + 9), v13, 0) )
          break;
        v12 = *((_DWORD **)v12 + 9);
      }
    }
    v7 = *((_QWORD *)v12 + 3);
    v14 = *(_QWORD *)(a1 + 64);
    if ( v7 + 1 != *(_QWORD *)(v14 + 40) )
      ++v7;
    if ( a4 && (*v12 == 4 || *v12 == 67 && v12[9] == v12[17]) && *((_BYTE *)v12 + 64) == 15 )
    {
      v15 = 0;
      v16 = 0;
      sub_32F770((__int64 *)(a2 + 24), &v15, v14);
      if ( (unsigned __int8)sub_1C4AE0(*((int **)v12 + 9), (int)v12[17], (int *)&v15, *(int *)(a2 + 40), a5) )
        *a4 = v12 + 16;
      cleanup_argloc();
    }
    if ( (*((_BYTE *)v12 + 6) & 1) != 0 )
    {
      v15 = 0;
      v16 = 0;
      sub_32F770((__int64 *)(a2 + 24), &v15, v14);
      v7 = sub_1F0B80(*(_QWORD *)(a1 + 64), v7, (int *)&v15, a5);
      cleanup_argloc();
    }
    if ( a3
      && !(unsigned __int8)sub_242770(*(_QWORD *)(a1 + 64), *((_QWORD *)v12 + 3), (__int64)(v12 + 8), a3, 0)
      && !(unsigned __int8)sub_242770(*(_QWORD *)(a1 + 64), *((_QWORD *)v12 + 3), (__int64)(v12 + 12), a3, 0) )
    {
      sub_242770(*(_QWORD *)(a1 + 64), *((_QWORD *)v12 + 3), (__int64)(v12 + 16), a3, 0);
    }
    return v7;
  }
  return sub_332AB0(*(_QWORD **)(a1 + 64), *(_QWORD *)(a1 + 32));
}

