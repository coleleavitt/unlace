char __fastcall sub_11ED30(__int64 a1, double a2)
{
  char result; // al
  _QWORD *v4; // rdx
  __int64 v5; // rax
  int *v6; // rcx
  unsigned __int64 v7; // rax
  int v8; // edx
  char v9; // al
  char v10; // [rsp+Fh] [rbp-49h]
  char v11; // [rsp+Fh] [rbp-49h]
  __m128i v12; // [rsp+10h] [rbp-48h] BYREF
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+28h] [rbp-30h]
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 7:
      case 0xA:
      case 0xB:
      case 0xC:
      case 0xD:
        return 0;
      case 4:
        return sub_11EC90(*(_BYTE **)(a1 + 8));
      case 5:
        v4 = *(_QWORD **)(a1 + 8);
        v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v4 + 1496LL) + 24LL) + 16LL) & (*(_QWORD *)(*v4 + 1440LL) + v4[1]);
        v12.m128i_i64[1] = *(int *)(a1 + 4);
        v12.m128i_i64[0] = v5;
        return sub_317E70((_QWORD *)(*v4 + 232LL), &v12, 0);
      case 6:
        return 1;
      case 8:
        return *(_QWORD *)(*(_QWORD *)(a1 + 8) + 224LL) != 0;
      case 9:
        v6 = *(int **)(a1 + 8);
        v7 = v6[4];
        if ( *(_QWORD *)(*(_QWORD *)v6 + 440LL) < v7 )
          sub_11B980(a2);
        v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 432LL) + 104 * v7);
        result = 0;
        if ( (unsigned int)(v8 - 3) > 1 )
        {
          v12 = 0u;
          v13 = 0;
          v14 = 0;
          sub_11BCA0(*(_QWORD **)v6, (__int64)&v12, a1, 0xFFFF0000, 0.0);
          v9 = sub_318470((unsigned __int64 **)(**(_QWORD **)(a1 + 8) + 232LL), (__int64)&v13);
          if ( v13 )
          {
            v10 = v9;
            *(_QWORD *)&v14 = 0;
            qfree(v13);
            v9 = v10;
          }
          v11 = v9;
          qfree(v12.m128i_i64[0]);
          return v11;
        }
        return result;
      case 0xE:
        if ( !sub_11ED30(*(_QWORD *)(a1 + 8)) )
        {
          a1 = *(_QWORD *)(a1 + 8) + 16LL;
          continue;
        }
        return 1;
      case 0xF:
        v12.m128i_i64[0] = (__int64)&off_4DD598;
        return (unsigned int)sub_11E540((_BYTE *)a1, a2) != 0;
      default:
        if ( !under_debugger )
          sub_383060(0xC46Cu, a2);
        BUG();
    }
  }
}

