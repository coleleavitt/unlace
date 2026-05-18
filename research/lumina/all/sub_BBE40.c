__int64 __fastcall sub_BBE40(__int64 *a1, __int64 a2, int *a3, _QWORD *a4, __int64 a5)
{
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v11; // r13
  int *v12; // r14
  char v13; // al
  unsigned int v14; // r10d
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  const char *v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  const char *v22; // rax
  unsigned int v23; // eax
  unsigned int *v24; // rdx
  unsigned int v25; // eax
  __int64 *v26; // rdx
  unsigned int v27; // eax
  const char **v28; // rdx
  unsigned int v29; // eax
  __int64 *v30; // rdx
  unsigned int v31; // eax
  _QWORD **v32; // rdx
  __int64 v34; // [rsp+0h] [rbp-88h]
  unsigned int v35; // [rsp+14h] [rbp-74h]
  __int64 *v36; // [rsp+18h] [rbp-70h]
  _BYTE v37[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v7 = *a1;
  v8 = *(_QWORD *)(*a1 + 24);
  v38 = __readfsqword(0x28u);
  if ( (unsigned int)sub_C9810(v8) || (v11 = 0, (unsigned int)sub_11EAE0(*(_QWORD *)(v7 + 24))) )
  {
LABEL_2:
    if ( a5 )
      sub_BAA10(a5, *(_QWORD *)(v7 + 16));
    return 0;
  }
  else
  {
    v36 = (__int64 *)a5;
    v12 = a3;
    while ( 1 )
    {
      v13 = *(_BYTE *)(a2 + v11);
      v14 = v11 + 1;
      if ( !v13 )
        return 1;
      if ( a4 )
        break;
      while ( v13 == 32 )
      {
        ++v11;
        v13 = *(_BYTE *)(a2 + v11);
        v14 = v11 + 1;
        if ( !v13 )
          return 1;
      }
      switch ( v13 )
      {
        case 'B':
LABEL_54:
          v31 = *v12;
          if ( (unsigned int)*v12 > 0x2F )
          {
            v32 = *((_QWORD ***)v12 + 1);
            *((_QWORD *)v12 + 1) = v32 + 1;
          }
          else
          {
            v32 = (_QWORD **)(*((_QWORD *)v12 + 2) + v31);
            *v12 = v31 + 8;
          }
          v17 = sub_F6250(*(_QWORD *)(v7 + 24), v14, **v32, *((unsigned int *)*v32 + 2), -1);
          goto LABEL_14;
        case 'I':
        case 'U':
LABEL_39:
          v25 = *v12;
          if ( (unsigned int)*v12 > 0x2F )
          {
            v26 = *((__int64 **)v12 + 1);
            *((_QWORD *)v12 + 1) = v26 + 1;
          }
          else
          {
            v26 = (__int64 *)(*((_QWORD *)v12 + 2) + v25);
            *v12 = v25 + 8;
          }
          v18 = *v26;
LABEL_18:
          v17 = sub_ECD70(*(_QWORD *)(v7 + 24), v14, v18);
          goto LABEL_14;
        case 'i':
        case 'u':
        case 'y':
LABEL_36:
          v23 = *v12;
          if ( (unsigned int)*v12 <= 0x2F )
          {
            v24 = (unsigned int *)(*((_QWORD *)v12 + 2) + v23);
            *v12 = v23 + 8;
          }
          else
          {
            v24 = *((unsigned int **)v12 + 1);
            *((_QWORD *)v12 + 1) = v24 + 2;
          }
          v16 = *v24;
LABEL_13:
          v17 = sub_ECE00(*(_QWORD *)(v7 + 24), v14, v16);
          goto LABEL_14;
        case 's':
LABEL_42:
          v27 = *v12;
          if ( (unsigned int)*v12 > 0x2F )
          {
            v28 = *((const char ***)v12 + 1);
            *((_QWORD *)v12 + 1) = v28 + 1;
          }
          else
          {
            v28 = (const char **)(*((_QWORD *)v12 + 2) + v27);
            *v12 = v27 + 8;
          }
          v19 = *v28;
LABEL_26:
          v17 = sub_F6270(*(_QWORD *)(v7 + 24), v14, v19, 0xFFFFFFFFLL, -1);
          goto LABEL_14;
        case 't':
LABEL_45:
          v29 = *v12;
          if ( (unsigned int)*v12 > 0x2F )
          {
            v30 = *((__int64 **)v12 + 1);
            *((_QWORD *)v12 + 1) = v30 + 1;
          }
          else
          {
            v30 = (__int64 *)(*((_QWORD *)v12 + 2) + v29);
            *v12 = v29 + 8;
          }
          v34 = *v30;
LABEL_21:
          v35 = v14;
          if ( !(unsigned __int8)sub_1677A0(v37, 25, v34, 1) )
          {
            sub_2AAE0(v36);
            return 0;
          }
          v17 = sub_F6270(*(_QWORD *)(v7 + 24), v35, v37, 0xFFFFFFFFLL, -1);
LABEL_14:
          ++v11;
          if ( v17 )
          {
LABEL_15:
            a5 = (__int64)v36;
            goto LABEL_2;
          }
          break;
        default:
LABEL_58:
          if ( !unk_2439A0 )
            sub_198E10(1612);
          BUG();
      }
    }
    do
    {
      while ( 2 )
      {
        v15 = *a4 + 32LL * (int)v11;
        if ( v13 != 32 )
        {
          switch ( v13 )
          {
            case 'B':
              if ( !v15 )
                goto LABEL_54;
              v20 = *(_QWORD *)(v15 + 16);
              v21 = 0;
              v22 = s1;
              if ( v20 )
              {
                v22 = *(const char **)(v15 + 8);
                v21 = (unsigned int)(v20 - 1);
              }
              ++v11;
              if ( (unsigned int)sub_F6250(*(_QWORD *)(v7 + 24), v14, v22, v21, -1) )
                goto LABEL_15;
              v13 = *(_BYTE *)(a2 + v11);
              v14 = v11 + 1;
              if ( !v13 )
                return 1;
              continue;
            case 'I':
            case 'U':
              if ( !v15 )
                goto LABEL_39;
              v18 = *(_QWORD *)(v15 + 8);
              goto LABEL_18;
            case 'i':
            case 'u':
            case 'y':
              if ( !v15 )
                goto LABEL_36;
              v16 = *(unsigned int *)(v15 + 8);
              goto LABEL_13;
            case 's':
              if ( !v15 )
                goto LABEL_42;
              v19 = s1;
              if ( *(_QWORD *)(v15 + 16) )
                v19 = *(const char **)(v15 + 8);
              goto LABEL_26;
            case 't':
              if ( !v15 )
                goto LABEL_45;
              v34 = *(_QWORD *)(v15 + 8);
              goto LABEL_21;
            default:
              goto LABEL_58;
          }
        }
        break;
      }
      ++v11;
      v13 = *(_BYTE *)(a2 + v11);
      v14 = v11 + 1;
    }
    while ( v13 );
    return 1;
  }
}
