int __fastcall sub_EED70(unsigned int a1, char *a2, __int64 a3, double a4)
{
  char *v4; // rax
  int result; // eax
  signed __int64 v6; // rax
  bool v7; // cc
  __int64 v8; // rax

  v4 = &a2[*a2 & 0x3F];
  switch ( a2[1] )
  {
    case 1:
      v8 = *v4;
      v7 = v8 <= *(_QWORD *)(a3 + 16);
      if ( v8 >= *(_QWORD *)(a3 + 16) )
        goto LABEL_5;
      goto LABEL_9;
    case 2:
      v6 = (*v4 << 8) | (unsigned __int8)v4[1];
      goto LABEL_4;
    case 3:
      v6 = (*v4 << 16) | (unsigned __int16)__ROL2__(*(_WORD *)(v4 + 1), 8);
      goto LABEL_4;
    case 4:
      v6 = (int)_byteswap_ulong(*(_DWORD *)v4);
      goto LABEL_4;
    case 5:
      v6 = _byteswap_ulong(*(_DWORD *)(v4 + 2))
         + ((unsigned __int64)((*v4 << 8) | (unsigned int)(unsigned __int8)v4[1]) << 32);
      goto LABEL_4;
    case 6:
      v6 = _byteswap_uint64(*(_QWORD *)v4);
      goto LABEL_4;
    case 8:
      v6 = 0;
      goto LABEL_4;
    case 9:
      v6 = 1;
LABEL_4:
      v7 = v6 <= *(_QWORD *)(a3 + 16);
      if ( v6 < *(_QWORD *)(a3 + 16) )
      {
LABEL_9:
        result = *(char *)(a3 + 32);
      }
      else
      {
LABEL_5:
        if ( v7 )
        {
          if ( *(_WORD *)(a3 + 28) > 1u )
          {
            result = sub_EE540(a1, a2, (__int64 *)a3, 1, a4);
          }
          else
          {
            result = *(char *)(a3 + 30);
            *(_BYTE *)(a3 + 34) = 1;
          }
        }
        else
        {
          result = *(char *)(a3 + 33);
        }
      }
      break;
    default:
      result = sub_EE540(a1, a2, (__int64 *)a3, 0, a4);
      break;
  }
  return result;
}
