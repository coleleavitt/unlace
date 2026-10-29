__int64 __fastcall sub_26A00(__int64 a1, int a2, __int64 a3, int a4, int *a5)
{
  int v5; // ebx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rcx
  int *v12; // rax
  int v13; // r12d
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  switch ( a4 )
  {
    case 1:
      if ( (unsigned int)*a5 <= 0x2F )
        *a5 += 8;
      else
        *((_QWORD *)a5 + 1) += 8LL;
      return (int)qsnprintf();
    case 2:
      v7 = *a5;
      if ( (unsigned int)*a5 > 0x2F )
      {
        v18 = *((_QWORD *)a5 + 1) + 8LL;
        *((_QWORD *)a5 + 1) = v18;
      }
      else
      {
        *a5 = v7 + 8;
        if ( (unsigned int)(v7 + 8) <= 0x2F )
        {
          *a5 = v7 + 16;
          return (int)qsnprintf();
        }
        v18 = *((_QWORD *)a5 + 1);
      }
      *((_QWORD *)a5 + 1) = v18 + 8;
      return (int)qsnprintf();
    case 3:
      if ( (unsigned int)*a5 > 0x2F )
        *((_QWORD *)a5 + 1) += 8LL;
      else
        *a5 += 8;
      return (int)qsnprintf();
    case 4:
      v8 = *a5;
      if ( (unsigned int)*a5 > 0x2F )
      {
        v17 = *((_QWORD *)a5 + 1) + 8LL;
        *((_QWORD *)a5 + 1) = v17;
      }
      else
      {
        *a5 = v8 + 8;
        if ( (unsigned int)(v8 + 8) <= 0x2F )
        {
          *a5 = v8 + 16;
          return (int)qsnprintf();
        }
        v17 = *((_QWORD *)a5 + 1);
      }
      *((_QWORD *)a5 + 1) = v17 + 8;
      return (int)qsnprintf();
    case 5:
    case 6:
    case 7:
    case 18:
      return (int)(qstpncpy() - a2);
    case 15:
      if ( (unsigned int)*a5 <= 0x2F )
        *a5 += 8;
      else
        *((_QWORD *)a5 + 1) += 8LL;
      return (int)qsnprintf();
    case 17:
      v9 = *a5;
      if ( (unsigned int)*a5 > 0x2F )
      {
        v12 = (int *)(*((_QWORD *)a5 + 1) + 8LL);
        *((_QWORD *)a5 + 1) = v12;
      }
      else
      {
        v10 = *((_QWORD *)a5 + 2);
        v11 = (unsigned int)(v9 + 8);
        *a5 = v11;
        if ( (unsigned int)v11 <= 0x2F )
        {
          v12 = (int *)(v11 + v10);
          *a5 = v9 + 16;
          goto LABEL_20;
        }
        v12 = *((int **)a5 + 1);
      }
      *((_QWORD *)a5 + 1) = v12 + 2;
LABEL_20:
      v13 = *v12;
      v5 = qsnprintf();
      if ( v13 )
        v5 += qsnprintf();
      return v5;
    case 19:
      v14 = *a5;
      if ( (unsigned int)*a5 > 0x2F )
      {
        v15 = *((_QWORD *)a5 + 1) + 8LL;
LABEL_28:
        v16 = v15 + 8;
        goto LABEL_29;
      }
      *a5 = v14 + 8;
      if ( (unsigned int)(v14 + 8) > 0x2F )
      {
        v15 = *((_QWORD *)a5 + 1);
        goto LABEL_28;
      }
      *a5 = v14 + 16;
      if ( (unsigned int)(v14 + 16) <= 0x2F )
      {
        *a5 = v14 + 24;
        return (int)qsnprintf();
      }
LABEL_41:
      v16 = *((_QWORD *)a5 + 1);
LABEL_29:
      *((_QWORD *)a5 + 1) = v16 + 8;
      return (int)qsnprintf();
    default:
      if ( a4 <= 19 )
        return (int)qsnprintf();
      sub_25E20();
      goto LABEL_41;
  }
}

