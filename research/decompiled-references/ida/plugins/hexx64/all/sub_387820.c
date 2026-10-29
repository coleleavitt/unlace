__int64 __fastcall sub_387820(__int64 a1, char *a2, double a3)
{
  _QWORD **v3; // r14
  _QWORD *v4; // rbx
  bool v5; // dl
  char *v6; // rbp
  unsigned int v7; // eax
  unsigned int v8; // eax
  _QWORD *v9; // rax
  char *v11; // rbp
  int v12; // eax
  __int64 *v13; // [rsp+0h] [rbp-48h]

  v3 = *(_QWORD ***)(a1 + 72);
  if ( *v3 )
  {
    v4 = (_QWORD *)(**v3 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v4 )
      goto LABEL_17;
    if ( (*(_BYTE *)v4 & 2) == 0 )
    {
      v5 = a2 == nullptr;
      while ( 1 )
      {
        v6 = (char *)v4[3];
        if ( v6 == a2 )
        {
LABEL_20:
          v9 = **(_QWORD ***)(a1 + 72);
LABEL_16:
          if ( v4 != v9 )
LABEL_17:
            rangeset_t_add2();
          return 0;
        }
        v13 = v4 + 3;
        if ( !v6 || a2 == &byte_1 )
          break;
        if ( v6 != &byte_1 && !v5 )
        {
          v7 = sub_2596A0((__int64)a2, (__int64)v6, a3);
          v5 = 0;
          if ( v7 )
            v8 = v7 >> 31;
          else
            LOBYTE(v8) = *(_QWORD *)a2 < *(_QWORD *)v6;
          if ( !(_BYTE)v8 )
          {
            v11 = (char *)*v13;
            if ( (char *)*v13 == a2 || v11 == &byte_1 )
              goto LABEL_20;
            if ( v11 )
            {
              v12 = sub_2596A0(*v13, (__int64)a2, a3);
              v5 = 0;
              if ( v12 )
              {
                if ( v12 >= 0 )
                  goto LABEL_20;
              }
              else if ( *(_QWORD *)v11 >= *(_QWORD *)a2 )
              {
                goto LABEL_20;
              }
            }
LABEL_23:
            v4 = (_QWORD *)v4[2];
            goto LABEL_14;
          }
        }
        v4 = (_QWORD *)v4[1];
LABEL_14:
        if ( (*(_BYTE *)v4 & 2) != 0 )
        {
          v4 = *v3;
          v9 = **(_QWORD ***)(a1 + 72);
          goto LABEL_16;
        }
      }
      if ( v6 == &byte_1 || v5 )
        goto LABEL_20;
      goto LABEL_23;
    }
  }
  return 0;
}

