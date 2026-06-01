unsigned __int8 __fastcall sub_34520(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v5; // rdi
  unsigned __int8 result; // al
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned int v18; // eax
  int v19; // ebp
  __int64 v20; // rdi

  if ( a3 > 0xB0 )
  {
    result = 0;
    if ( a3 != 256 )
      return result;
  }
  else
  {
    if ( a3 <= 0x7F )
    {
      if ( a3 != 112 && a3 != 64 )
        return 0;
      v5 = *((_QWORD *)a2 + 1);
      switch ( *(_DWORD *)(a1 + 120) )
      {
        case 0:
        case 4:
          if ( v5 )
          {
            *((_QWORD *)a2 + 2) = 0;
            qfree(v5);
            *((_QWORD *)a2 + 1) = 0;
            *((_QWORD *)a2 + 3) = 0;
          }
          sub_29E60((__int64)a2, 0, 4, 7);
          v15 = 1;
          if ( a3 == 112 )
          {
            v19 = 47;
            if ( *(_DWORD *)(a1 + 120) == 4 )
              v19 = 45;
            v20 = *((_QWORD *)a2 + 4);
            if ( v20 )
            {
              *((_QWORD *)a2 + 5) = 0;
              qfree(v20);
              *((_QWORD *)a2 + 4) = 0;
              *((_QWORD *)a2 + 6) = 0;
            }
            sub_29E60((__int64)a2, 1, 44, v19);
            v15 = 5;
          }
          *a2 = v15;
          a2[1] = *((_QWORD *)a2 + 2);
          result = 1;
          break;
        case 1:
        case 2:
          if ( v5 )
          {
            *((_QWORD *)a2 + 2) = 0;
            qfree(v5);
            *((_QWORD *)a2 + 1) = 0;
            *((_QWORD *)a2 + 3) = 0;
          }
          sub_29E60((__int64)a2, 0, 4, 11);
          v13 = *((_QWORD *)a2 + 4);
          if ( v13 )
          {
            *((_QWORD *)a2 + 5) = 0;
            qfree(v13);
            *((_QWORD *)a2 + 4) = 0;
            *((_QWORD *)a2 + 6) = 0;
          }
          sub_29E60((__int64)a2, 1, 44, 51);
          v14 = *((_QWORD *)a2 + 2);
          *a2 = 3;
          a2[1] = v14;
          result = 1;
          break;
        case 3:
          if ( v5 )
          {
            *((_QWORD *)a2 + 2) = 0;
            qfree(v5);
            *((_QWORD *)a2 + 1) = 0;
            *((_QWORD *)a2 + 3) = 0;
          }
          sub_29E60((__int64)a2, 0, 4, 11);
          v17 = *((_QWORD *)a2 + 4);
          if ( v17 )
          {
            *((_QWORD *)a2 + 5) = 0;
            qfree(v17);
            *((_QWORD *)a2 + 4) = 0;
            *((_QWORD *)a2 + 6) = 0;
          }
          sub_29E60((__int64)a2, 1, 44, 51);
          v18 = a2[4] + *((_QWORD *)a2 + 5);
          *a2 = 2;
          a2[1] = v18;
          result = 1;
          break;
        case 5:
          if ( v5 )
          {
            *((_QWORD *)a2 + 2) = 0;
            qfree(v5);
            *((_QWORD *)a2 + 1) = 0;
            *((_QWORD *)a2 + 3) = 0;
          }
          sub_29E60((__int64)a2, 0, 4, 11);
          v16 = *((_QWORD *)a2 + 2);
          *a2 = 1;
          a2[1] = v16;
          result = 1;
          break;
        default:
          if ( under_debugger )
            BUG();
          interr(10478);
          result = sub_34870();
          break;
      }
      return result;
    }
    v7 = 0x1000000010001LL;
    result = _bittest64(&v7, a3 - 128);
    if ( !result )
      return result;
  }
  v8 = *((_QWORD *)a2 + 1);
  *a2 = 0;
  if ( v8 )
  {
    *((_QWORD *)a2 + 2) = 0;
    qfree(v8);
    *((_QWORD *)a2 + 1) = 0;
    *((_QWORD *)a2 + 3) = 0;
  }
  v9 = *((_QWORD *)a2 + 4);
  if ( v9 )
  {
    *((_QWORD *)a2 + 5) = 0;
    qfree(v9);
    *((_QWORD *)a2 + 4) = 0;
    *((_QWORD *)a2 + 6) = 0;
  }
  v10 = *((_QWORD *)a2 + 2);
  v11 = (unsigned int)*a2;
  a2[1] = v10;
  if ( (unsigned int)v11 <= 6 )
  {
    v12 = 84;
    if ( _bittest64(&v12, v11) )
      a2[1] = a2[10] + v10;
  }
  return 1;
}

