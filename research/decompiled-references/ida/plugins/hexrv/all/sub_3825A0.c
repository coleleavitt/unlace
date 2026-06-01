__int64 __fastcall sub_3825A0(__int64 a1, char *a2)
{
  _QWORD **v2; // r14
  _QWORD *v3; // rbx
  bool v4; // dl
  char *v5; // rbp
  unsigned int v6; // eax
  unsigned int v7; // eax
  _QWORD *v8; // rax
  char *v10; // rbp
  int v11; // eax
  __int64 *v12; // [rsp+0h] [rbp-48h]

  v2 = *(_QWORD ***)(a1 + 72);
  if ( *v2 )
  {
    v3 = (_QWORD *)(**v2 & 0xFFFFFFFFFFFFFFFCLL);
    if ( !v3 )
      goto LABEL_17;
    if ( (*(_BYTE *)v3 & 2) == 0 )
    {
      v4 = a2 == nullptr;
      while ( 1 )
      {
        v5 = (char *)v3[3];
        if ( v5 == a2 )
        {
LABEL_20:
          v8 = **(_QWORD ***)(a1 + 72);
LABEL_16:
          if ( v3 != v8 )
LABEL_17:
            rangeset_t_add2();
          return 0;
        }
        v12 = v3 + 3;
        if ( !v5 || a2 == &byte_1 )
          break;
        if ( v5 != &byte_1 && !v4 )
        {
          v6 = sub_254AA0((__int64)a2, (__int64)v5);
          v4 = 0;
          if ( v6 )
            v7 = v6 >> 31;
          else
            LOBYTE(v7) = *(_QWORD *)a2 < *(_QWORD *)v5;
          if ( !(_BYTE)v7 )
          {
            v10 = (char *)*v12;
            if ( (char *)*v12 == a2 || v10 == &byte_1 )
              goto LABEL_20;
            if ( v10 )
            {
              v11 = sub_254AA0(*v12, (__int64)a2);
              v4 = 0;
              if ( v11 )
              {
                if ( v11 >= 0 )
                  goto LABEL_20;
              }
              else if ( *(_QWORD *)v10 >= *(_QWORD *)a2 )
              {
                goto LABEL_20;
              }
            }
LABEL_23:
            v3 = (_QWORD *)v3[2];
            goto LABEL_14;
          }
        }
        v3 = (_QWORD *)v3[1];
LABEL_14:
        if ( (*(_BYTE *)v3 & 2) != 0 )
        {
          v3 = *v2;
          v8 = **(_QWORD ***)(a1 + 72);
          goto LABEL_16;
        }
      }
      if ( v5 == &byte_1 || v4 )
        goto LABEL_20;
      goto LABEL_23;
    }
  }
  return 0;
}

