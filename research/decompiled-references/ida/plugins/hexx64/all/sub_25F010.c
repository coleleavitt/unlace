__int64 __fastcall sub_25F010(__int64 a1, __int64 a2, double a3)
{
  int v4; // eax
  __int64 v5; // r15
  unsigned int v6; // ebx
  __int64 v8; // r12
  __int64 v9; // rax
  int v10; // r14d
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // r12
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // r8
  __int64 *v18; // r12
  int tinfo_size; // ebx
  int v20; // eax
  int v21; // ebx
  unsigned __int64 v22; // rdx
  __int64 tinfo_property; // [rsp+0h] [rbp-68h]
  __int64 v24; // [rsp+8h] [rbp-60h]
  __int64 v25; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+18h] [rbp-50h] BYREF
  _QWORD *v27[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_DWORD *)(a1 + 88);
  v27[1] = (_QWORD *)__readfsqword(0x28u);
  v5 = a2;
  if ( v4 == -1 )
  {
    if ( !sub_259850(a2, *(_QWORD *)(a1 + 64), 0, a3) )
      goto LABEL_6;
  }
  else if ( *(_DWORD *)(a2 + 8) == 65 && v4 == *(_DWORD *)(a2 + 32) )
  {
LABEL_6:
    v8 = *(_QWORD *)(a1 + 24);
    v9 = *(_QWORD *)(a1 + 16);
    v25 = 0;
    v10 = v8 - 1;
    v11 = *(_QWORD *)(v9 + 8LL * ((int)v8 - 1));
    v12 = *(_DWORD *)(v11 + 8);
    if ( *(_BYTE *)(a1 + 93) )
    {
      if ( v12 != 48 )
      {
        if ( v12 != 35 )
        {
          v14 = 0;
          goto LABEL_11;
        }
        v13 = 1;
        goto LABEL_27;
      }
      copy_tinfo_t();
      tinfo_property = (int)get_tinfo_property();
      if ( (get_tinfo_property() & 0xF) != 0xA )
        goto LABEL_19;
      v13 = tinfo_property;
      if ( tinfo_property == -1 )
        goto LABEL_19;
      v10 = v8 - 2;
      v5 = v11;
      v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * ((int)v8 - 2)) + 8LL);
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * ((int)v8 - 2));
    }
    else
    {
      v13 = 1;
    }
    v14 = 0;
    if ( v12 != 35 )
    {
LABEL_9:
      if ( v12 == 48 )
      {
        do
        {
          copy_tinfo_t();
          --v10;
        }
        while ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v10) + 8LL) == 48 );
      }
LABEL_11:
      if ( (get_tinfo_property() & 0xF) == 0xA )
      {
        v6 = 1;
        if ( !*(_BYTE *)(a1 + 92) )
        {
LABEL_20:
          clear_tinfo_t();
          return v6;
        }
        v27[0] = (_QWORD *)get_tinfo_property();
        copy_tinfo_t();
        clear_tinfo_t();
        if ( (get_tinfo_property() & 0x3F) == 1 )
        {
          v27[0] = (_QWORD *)(&dword_30 + 2);
          copy_tinfo_t();
          clear_tinfo_t();
        }
        v15 = *(_QWORD **)(a1 + 72);
        if ( v15 )
        {
          v16 = *v15 & 0xFFFFFFFFFFFFFFFCLL;
          if ( !v16 )
          {
LABEL_34:
            v21 = sub_32E340((__int64 *)(v16 + 32));
            if ( v21 > (int)sub_32E340(&v25) )
            {
              copy_tinfo_t();
              v6 = 0;
              goto LABEL_20;
            }
            goto LABEL_19;
          }
          while ( (*(_BYTE *)v16 & 2) == 0 )
          {
            v22 = *(_QWORD *)(v16 + 24);
            if ( v14 >= v22 )
            {
              if ( v22 >= v14 )
              {
                if ( v15 == (_QWORD *)v16 )
                  break;
                goto LABEL_34;
              }
              v16 = *(_QWORD *)(v16 + 16);
            }
            else
            {
              v16 = *(_QWORD *)(v16 + 8);
            }
          }
        }
        v26 = v14;
        v27[0] = &v26;
        sub_25EEA0((__m128i *)(a1 + 72), &v26, v27);
        copy_tinfo_t();
      }
LABEL_19:
      v6 = 0;
      goto LABEL_20;
    }
LABEL_27:
    v17 = *(_QWORD *)(v11 + 24);
    if ( v17 == v5 )
      v17 = *(_QWORD *)(v11 + 32);
    if ( *(_DWORD *)(v17 + 8) != 61 )
      goto LABEL_19;
    v24 = v13;
    v18 = *(__int64 **)(v17 + 24);
    tinfo_size = get_tinfo_size();
    if ( tinfo_size > 16 )
      tinfo_size = 16;
    v20 = get_tinfo_property();
    --v10;
    v14 = sub_32ABC0(*v18, tinfo_size, v20 == 1) * v24;
    v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v10) + 8LL);
    goto LABEL_9;
  }
  return 0;
}

