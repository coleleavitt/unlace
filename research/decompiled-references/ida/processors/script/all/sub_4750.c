__int64 __fastcall sub_4750(char *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rdx
  char *v5; // rbx
  char *v7; // r12
  unsigned int v8; // ebp
  char *v9; // rcx
  char *v10; // r14
  __int64 v12; // rdx
  _QWORD *v13; // r12
  __int64 v14; // rax
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 i; // rax
  struct _Unwind_Exception *v19; // rbx
  __int64 v21; // [rsp+8h] [rbp-98h]
  char *v22; // [rsp+10h] [rbp-90h]
  unsigned int v23; // [rsp+10h] [rbp-90h]
  char *v24; // [rsp+18h] [rbp-88h] BYREF
  __int128 v25; // [rsp+20h] [rbp-80h]
  char v26; // [rsp+38h] [rbp-68h] BYREF
  __int128 v27; // [rsp+40h] [rbp-60h]
  __int64 v28; // [rsp+50h] [rbp-50h]
  unsigned __int64 v29; // [rsp+60h] [rbp-40h]

  v4 = *(_QWORD *)a1;
  v21 = a2;
  v29 = __readfsqword(0x28u);
  v26 = 2;
  v28 = 0;
  v27 = 0;
  if ( v4 )
  {
    v5 = a1;
    v7 = a1;
    v8 = 0;
    while ( 2 )
    {
      v9 = &v26;
      v10 = &v26;
      if ( a4 )
      {
        while ( 1 )
        {
          if ( !qword_8198 )
          {
            v19 = (struct _Unwind_Exception *)sub_4210((__int64)a1, a2);
            if ( v24 )
            {
              *(_QWORD *)&v25 = 0;
              qfree();
            }
            free_idcv();
            _Unwind_Resume(v19);
          }
          v22 = v9;
          a2 = a3;
          v10 = v9;
          a1 = v9;
          if ( (*(unsigned __int8 (__fastcall **)(char *, __int64))(qword_8198 + 88))(v9, a3) )
            break;
          v9 = v22;
          if ( !v7[24] )
            goto LABEL_7;
          v7 = &v5[32 * ++v8];
          if ( !*(_QWORD *)v7 )
            goto LABEL_20;
        }
      }
      else
      {
        while ( (unsigned int)get_idcv_attr() )
        {
          if ( !v7[24] )
            goto LABEL_7;
          v7 = &v5[32 * ++v8];
          if ( !*(_QWORD *)v7 )
            goto LABEL_20;
        }
      }
      a2 = *((unsigned int *)v7 + 2);
      v12 = (unsigned __int16)a2;
      if ( (unsigned __int64)(unsigned __int16)a2 - 7 <= 1 )
      {
        if ( v26 == 7 )
        {
LABEL_17:
          a1 = (char *)(*((_QWORD *)v7 + 2) + v21);
          v13 = a1;
          switch ( (__int16)a2 )
          {
            case 2:
            case 5:
              *(_DWORD *)a1 = v27;
              goto LABEL_19;
            case 3:
              v14 = v27;
              goto LABEL_29;
            case 4:
              *(_WORD *)a1 = v27;
              goto LABEL_19;
            case 7:
              a1 = &byte_520F;
              if ( *((_QWORD *)&v27 + 1) )
                a1 = (char *)v27;
              v14 = qstrdup();
LABEL_29:
              *v13 = v14;
              goto LABEL_19;
            case 8:
              v15 = 0;
              if ( *((_QWORD *)&v27 + 1) )
                v15 = *(_BYTE *)v27;
              *a1 = v15;
              goto LABEL_19;
            case 10:
              a2 = (__int64)a1;
              a1 = v10;
              if ( !(unsigned int)sub_42D0(v10, a2, v12) )
                break;
              goto LABEL_19;
            case 11:
              v23 = WORD1(a2);
              if ( !WORD1(a2) )
                break;
              a2 = (__int64)&v24;
              v24 = nullptr;
              v25 = 0;
              if ( sub_45B0((__int64)v10, (__int64 *)&v24) )
              {
                v16 = v23;
                if ( v23 > (unsigned __int64)v25 )
                  v16 = v25;
                if ( v16 )
                {
                  v17 = (__int64)v24;
                  for ( i = 0; i != v16; ++i )
                  {
                    a2 = *(unsigned int *)(v17 + 4 * i);
                    *((_BYTE *)v13 + i) = a2;
                  }
                }
              }
              a1 = v24;
              if ( v24 )
              {
                *(_QWORD *)&v25 = 0;
                qfree();
              }
LABEL_19:
              v7 = &v5[32 * ++v8];
              if ( !*(_QWORD *)v7 )
                goto LABEL_20;
              continue;
            default:
              goto LABEL_7;
          }
        }
      }
      else if ( ((unsigned __int64)(unsigned __int16)a2 - 2 > 3 || v26 == 2) && (v26 == 5 || (unsigned __int16)a2 <= 9u) )
      {
        goto LABEL_17;
      }
      break;
    }
  }
  else
  {
LABEL_20:
    v8 = -1;
  }
LABEL_7:
  free_idcv();
  return v8;
}

