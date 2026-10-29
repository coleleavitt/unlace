void __fastcall sub_12680(_QWORD *a1, __int64 *a2, int a3)
{
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rax
  unsigned int *v9; // r15
  _BYTE *v10; // rax
  _BYTE *v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  void (*v14)(); // rax
  void (*v15)(); // r8
  _BYTE *v16; // [rsp+8h] [rbp-40h]

  if ( a1[1] )
  {
    v6 = 0;
    do
    {
      while ( 1 )
      {
        v7 = (_QWORD *)a1[3];
        if ( v7 )
        {
          v8 = v7[2];
          if ( v8 )
          {
            v9 = (unsigned int *)(*a1 + 16 * v6);
            if ( *v9 < (unsigned __int64)(v8 - 1) )
            {
              v10 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
              v11 = v10;
              if ( v10 )
              {
                if ( *v10 && (~*((_BYTE *)v9 + 4) & 0xE) == 0 && ((v9[1] & 0x11) == 1 || *((_BYTE *)v9 + 5)) )
                {
                  v12 = *((_QWORD *)v9 + 1) + a2[5];
                  v13 = *a2;
                  if ( a3 == 12 && *((_BYTE *)v9 + 5) == 1 )
                  {
                    v15 = *(void (**)())(v13 + 40);
                    if ( v15 != nullsub_15 )
                    {
                      v16 = v11;
                      ((void (__fastcall *)(__int64 *, __int64, _BYTE *, bool))v15)(
                        a2,
                        v12,
                        v11,
                        (*((_WORD *)v9 + 3) & 0xF) == 8);
                      v13 = *a2;
                      v11 = v16;
                    }
                  }
                  v14 = *(void (**)())(v13 + 8);
                  if ( v14 != nullsub_11 )
                    break;
                }
              }
            }
          }
        }
        if ( ++v6 >= a1[1] )
          return;
      }
      ++v6;
      ((void (__fastcall *)(__int64 *, __int64, _BYTE *))v14)(a2, v12, v11);
    }
    while ( v6 < a1[1] );
  }
}

