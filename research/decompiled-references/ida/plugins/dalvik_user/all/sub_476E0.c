unsigned __int64 __fastcall sub_476E0(__int64 a1, int a2, unsigned __int8 *a3)
{
  unsigned __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 *v9; // rbp
  __int64 v10; // rcx
  __int16 v11; // bp
  unsigned __int64 v12; // rsi
  __int64 i; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rsi
  __int64 v18; // rax

  result = *a3;
  if ( (char)result > 74 )
  {
    result = (unsigned int)(result - 76);
    if ( (unsigned __int8)result <= 0x28u )
    {
      v10 = 0x18108808001LL;
      if ( _bittest64(&v10, result) )
      {
        return sub_46BB0(a1, a2, *((_QWORD *)a3 + 1));
      }
      else if ( (_BYTE)result == 14 )
      {
        return sub_46D10(a1, a3[8]);
      }
      else if ( (_BYTE)result == 7 )
      {
        v11 = *((_WORD *)a3 + 4);
        if ( *(_BYTE *)(a1 + 56) )
          sub_1FAD0((__int64 *)(a1 + 32));
        result = *(_QWORD *)(a1 + 8);
        v12 = *(_QWORD *)(a1 + 16);
        for ( i = *(_QWORD *)a1; v12 < result + 2; v12 = *(_QWORD *)(a1 + 16) )
        {
          *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 24) + v12;
          v14 = qrealloc();
          i = v14;
          if ( !v14 )
LABEL_36:
            sub_43DF0((__int64)"JDWP encoder");
          *(_QWORD *)a1 = v14;
          result = *(_QWORD *)(a1 + 8);
        }
LABEL_21:
        *(_WORD *)(i + result) = __ROL2__(v11, 8);
        *(_QWORD *)(a1 + 8) += 2LL;
      }
    }
  }
  else if ( (char)result > 65 )
  {
    LODWORD(result) = result - 66;
    switch ( (char)result )
    {
      case 0:
        return sub_46D10(a1, a3[8]);
      case 1:
        v11 = *((_WORD *)a3 + 4);
        if ( *(_BYTE *)(a1 + 56) )
          sub_1FAD0((__int64 *)(a1 + 32));
        result = *(_QWORD *)(a1 + 8);
        v17 = *(_QWORD *)(a1 + 16);
        i = *(_QWORD *)a1;
        if ( v17 >= result + 2 )
          goto LABEL_21;
        while ( 1 )
        {
          *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 24) + v17;
          v18 = qrealloc();
          i = v18;
          if ( !v18 )
            goto LABEL_36;
          *(_QWORD *)a1 = v18;
          result = *(_QWORD *)(a1 + 8);
          v17 = *(_QWORD *)(a1 + 16);
          if ( v17 >= result + 2 )
            goto LABEL_21;
        }
      case 2:
        if ( *(_BYTE *)(a1 + 56) )
          sub_1FAD0((__int64 *)(a1 + 32));
        v5 = *(_QWORD *)(a1 + 8);
        v15 = *(_QWORD *)(a1 + 16);
        v7 = *(_QWORD *)a1;
        if ( v15 >= v5 + 8 )
          goto LABEL_9;
        while ( 1 )
        {
          *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 24) + v15;
          v16 = qrealloc();
          v7 = v16;
          if ( !v16 )
            goto LABEL_36;
          *(_QWORD *)a1 = v16;
          v5 = *(_QWORD *)(a1 + 8);
          v15 = *(_QWORD *)(a1 + 16);
          if ( v15 >= v5 + 8 )
            goto LABEL_9;
        }
      case 4:
      case 7:
        return sub_46AA0(a1, *((_DWORD *)a3 + 2));
      case 8:
        if ( *(_BYTE *)(a1 + 56) )
          sub_1FAD0((__int64 *)(a1 + 32));
        v5 = *(_QWORD *)(a1 + 8);
        v6 = *(_QWORD *)(a1 + 16);
        v7 = *(_QWORD *)a1;
        if ( v6 >= v5 + 8 )
          goto LABEL_9;
        break;
      default:
        return (unsigned int)result;
    }
    do
    {
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 24) + v6;
      v8 = qrealloc();
      v7 = v8;
      if ( !v8 )
        goto LABEL_36;
      *(_QWORD *)a1 = v8;
      v5 = *(_QWORD *)(a1 + 8);
      v6 = *(_QWORD *)(a1 + 16);
    }
    while ( v6 < v5 + 8 );
LABEL_9:
    v9 = (unsigned __int64 *)(v7 + v5);
    result = swap64();
    *v9 = result;
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}

