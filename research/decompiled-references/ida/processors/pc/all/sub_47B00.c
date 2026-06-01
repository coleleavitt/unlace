unsigned __int64 __fastcall sub_47B00(__int64 a1, __int64 *a2)
{
  bool v3; // zf
  unsigned int v5; // r13d
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  char v10; // cl
  __int64 ph; // rax
  int v12; // edx
  int v13; // ecx
  int v15; // ebp
  int v16; // eax
  bool v17; // dl
  unsigned __int64 i; // rbp
  unsigned __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // rdi
  _DWORD *v24; // r12
  __int64 v25; // rbp
  __int64 v26; // rsi
  unsigned __int64 v27; // r14
  __int64 v28; // [rsp+0h] [rbp-58h]
  int v29; // [rsp+Ch] [rbp-4Ch]
  int v30; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v31; // [rsp+18h] [rbp-40h]

  v3 = a2[1] == 0;
  v31 = __readfsqword(0x28u);
  if ( !v3 )
  {
    v5 = 0;
    v6 = 0;
    v28 = a1 + 16;
    while ( 1 )
    {
      v8 = *a2;
      v9 = *a2 + 40 * v6;
      v10 = *(_BYTE *)(v9 + 1);
      if ( v10 == 1 )
        break;
      if ( v10 == 4 )
      {
        if ( !*(_BYTE *)(v9 + 32) )
          break;
        v6 = ++v5;
        if ( v5 >= (unsigned __int64)a2[1] )
          goto LABEL_9;
      }
      else
      {
        v7 = a2[1];
        if ( v10 == 99 )
        {
          v19 = *(unsigned __int16 *)(a1 + 40);
          if ( (unsigned __int16)v19 > 0xA6u )
          {
            if ( (unsigned __int16)v19 > 0x100u )
            {
              if ( (_WORD)v19 != 526 )
              {
                if ( (unsigned __int16)v19 > 0x20Eu )
                {
                  if ( (_WORD)v19 != 584 && (_WORD)v19 != 695 )
                    goto LABEL_4;
                }
                else if ( (_WORD)v19 != 430 && (_WORD)v19 != 465 )
                {
                  goto LABEL_4;
                }
              }
            }
            else
            {
              if ( (unsigned __int16)v19 <= 0xC7u )
                goto LABEL_4;
              v22 = 0x1E0000000090613LL;
              LOWORD(v19) = v19 - 200;
              if ( !_bittest64(&v22, v19) )
                goto LABEL_4;
            }
          }
          else if ( (unsigned __int16)v19 > 0x6Bu )
          {
            v26 = 0x7E0F00790980777LL;
            if ( !_bittest64(&v26, (unsigned int)(v19 - 108)) )
              goto LABEL_4;
          }
          else
          {
            if ( (unsigned __int16)(v19 - 5) > 0x27u )
              goto LABEL_4;
            v20 = 0x160C0C40FCE0LL;
            if ( !_bittest64(&v20, v19) )
              goto LABEL_4;
          }
          if ( !v7 )
            goto LABEL_9;
          v21 = 0;
          while ( 1 )
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                   a1,
                   v8 + 40 * v21,
                   v9) )
            {
              *(_BYTE *)(*a2 + 40 * v21 + 1) = 0;
            }
            v7 = a2[1];
            if ( ++v21 >= v7 )
              break;
            v8 = *a2;
          }
        }
LABEL_4:
        v6 = ++v5;
        if ( v5 >= v7 )
          goto LABEL_9;
      }
    }
    v15 = *(unsigned __int16 *)(v9 + 6);
    v16 = sub_6E480(*(_QWORD *)(a1 + 888), v28, 0);
    if ( v16 == -1 )
    {
      v23 = *(_QWORD *)(a1 + 888);
      v30 = v15;
      v17 = (unsigned int)sub_72130(v23, v28, &v30, 1) != -1;
    }
    else
    {
      v17 = v15 == v16;
    }
    v7 = a2[1];
    if ( v17 )
    {
      if ( !v7 )
        goto LABEL_9;
      for ( i = 0; i < v7; ++i )
      {
        if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 8LL))(
               a1,
               40 * i + *a2,
               v9) )
        {
          *(_BYTE *)(*a2 + 40 * i + 1) = 0;
        }
        v7 = a2[1];
      }
    }
    goto LABEL_4;
  }
LABEL_9:
  ph = get_ph();
  v12 = *(unsigned __int16 *)(a1 + 40);
  v13 = *(_DWORD *)(ph + 104);
  if ( v12 >= v13 && v12 < *(_DWORD *)(ph + 108) )
  {
    v29 = *(_DWORD *)(*(_QWORD *)(ph + 112) + 16LL * (v12 - v13) + 8);
    if ( v29 )
    {
      v24 = dword_95840;
      v25 = a1 + 56;
      do
      {
        if ( (*v24 & v29) != 0 && *(_BYTE *)(v25 + 1) > 1u && a2[1] )
        {
          v27 = 0;
          do
          {
            if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                   a1,
                   40 * v27 + *a2,
                   v25) )
            {
              *(_BYTE *)(*a2 + 40 * v27 + 1) = 0;
            }
            ++v27;
          }
          while ( v27 < a2[1] );
        }
        ++v24;
        v25 += 40;
      }
      while ( a1 + 256 != v25 );
    }
  }
  return v31 - __readfsqword(0x28u);
}
