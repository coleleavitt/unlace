__int64 __fastcall sub_121DC0(__int64 a1, unsigned int a2, int a3, char a4)
{
  unsigned int v4; // r14d
  __int64 result; // rax
  __int64 v6; // rbx
  int v7; // ebp
  __int64 v8; // rdi
  __int64 v9; // r8
  int v10; // r9d
  char v11; // al
  __int64 v12; // rax
  int v13; // r15d
  __int64 v14; // rax
  unsigned __int64 v15; // r13
  __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  __int64 v18; // r15
  __int64 v19; // r13
  _QWORD *v20; // rbx
  __int64 v21; // r15
  __int64 v22; // rdx
  unsigned __int8 v23; // al
  char v24; // dl
  char v25; // cl
  __int16 v26; // cx
  __int64 v27; // rsi
  char tinfo_property; // al
  char v29; // cl
  char v30; // dl
  char v31; // cl
  bool v32; // zf
  char v33; // al
  char v35; // [rsp+Ch] [rbp-8Ch]
  unsigned __int8 v36; // [rsp+Ch] [rbp-8Ch]
  __int64 v37; // [rsp+10h] [rbp-88h]
  unsigned __int64 v38; // [rsp+20h] [rbp-78h]
  __int64 v39; // [rsp+28h] [rbp-70h]
  char v40; // [rsp+30h] [rbp-68h]
  __int64 v41; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v42; // [rsp+40h] [rbp-58h] BYREF
  __int128 v43; // [rsp+48h] [rbp-50h]
  unsigned __int64 v44; // [rsp+58h] [rbp-40h]

  v4 = a2 + a3;
  v44 = __readfsqword(0x28u);
  result = 0;
  if ( (signed int)(a2 + a3) <= *(_DWORD *)(a1 + 4) )
  {
    v6 = a1;
    v40 = 0;
    v7 = a3;
    if ( (get_tinfo_property() & 0x2F) != 0xD )
      goto LABEL_21;
    v8 = *(_QWORD *)(a1 + 8);
    v9 = *(int *)(v6 + 4);
    v41 = (int)a2;
    if ( !(unsigned __int8)sub_1C0340(v8, *(_QWORD *)(*(_QWORD *)(v8 + 16) + 1496LL), &v41, v7, v9) )
    {
LABEL_4:
      v11 = 0;
LABEL_36:
      v36 = v11;
      clear_tinfo_t();
      return v36;
    }
    v12 = *(_QWORD *)(v6 + 8);
    v43 = 0;
    v42 = 0;
    sub_32EC50((unsigned int)&v42, v12 + 48, v41, 0, 3, v10);
    if ( (_QWORD)v43 )
    {
      v13 = 0;
      v14 = 0;
      while ( 1 )
      {
        v15 = v42 + (v14 << 6);
        if ( v7 == get_tinfo_size() && (get_tinfo_property() & 0xF) != 0xE )
          break;
        v14 = ++v13;
        if ( v13 >= (unsigned __int64)v43 )
          goto LABEL_11;
      }
      v16 = *(_QWORD *)(v15 + 56);
      *(_QWORD *)(v15 + 56) = 0;
      v40 = v16;
LABEL_11:
      v17 = v42;
      if ( !v42 )
        goto LABEL_21;
      if ( (_QWORD)v43 )
      {
        v37 = v6;
        v18 = 0;
        v19 = v43;
        do
        {
          v20 = (_QWORD *)(v17 + (v18 << 6));
          clear_tinfo_t();
          if ( v20[4] )
          {
            v20[5] = 0;
            qfree();
          }
          if ( v20[1] )
          {
            v20[2] = 0;
            qfree();
          }
          ++v18;
          v17 = v42;
        }
        while ( v19 != v18 );
        v6 = v37;
      }
    }
    else if ( !v42 )
    {
LABEL_21:
      if ( !v40 && (a4 & 2) == 0 && (v7 > 16 || (v7 & (v7 - 1)) != 0) )
        goto LABEL_4;
      *(_QWORD *)&v43 = 0;
      sub_11EE80((__int64)&v42, (unsigned __int8 *)v6);
      v21 = v43;
      v22 = *(unsigned int *)(v6 + 4);
      v38 = v42;
      v39 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 1504LL);
      if ( v4 != (_DWORD)v22 && !(unsigned __int8)sub_1BDB20(v43, v39, v22, v4) )
        goto LABEL_38;
      if ( *(_DWORD *)v21 != 2 )
      {
        if ( !under_debugger )
          sub_37CFE0(51698);
        BUG();
      }
      if ( !a2 )
        goto LABEL_28;
      if ( !(unsigned __int8)sub_1C0860(v21, v39, a2, v4, a4 & 1) )
      {
LABEL_38:
        v7 = HIDWORD(v38);
        v33 = 0;
LABEL_35:
        v35 = v33;
        v42 = __PAIR64__(v7, v38);
        *(_QWORD *)&v43 = v21;
        sub_1181E0((__int64)&v42);
        v11 = v35;
        goto LABEL_36;
      }
      if ( *(_DWORD *)v21 == 2 )
      {
LABEL_28:
        if ( (a4 & 1) != 0 )
        {
          HIDWORD(v42) = v7;
          sub_121BF0((__int64)&v42);
          v21 = v43;
          v38 = v42;
        }
        else
        {
          HIDWORD(v38) = v7;
        }
        if ( (_BYTE)v38 == 15 )
        {
          if ( v40 )
          {
            v41 = 0;
            copy_tinfo_t();
          }
          else
          {
            sub_326800(&v41, v39, (unsigned int)v7);
          }
          copy_tinfo_t();
          clear_tinfo_t();
          if ( *(_QWORD *)(v21 + 24) )
          {
            *(_QWORD *)(v21 + 32) = 0;
            qfree();
            *(_QWORD *)(v21 + 24) = 0;
            *(_QWORD *)(v21 + 40) = 0;
          }
        }
        v23 = *(_BYTE *)v6;
        v24 = *(_BYTE *)(v6 + 1);
        *(_BYTE *)v6 = v38;
        v25 = BYTE1(v38);
        v7 = *(_DWORD *)(v6 + 4);
        BYTE1(v38) = v24;
        *(_BYTE *)(v6 + 1) = v25;
        v26 = *(_WORD *)(v6 + 2);
        *(_WORD *)(v6 + 2) = WORD1(v38);
        WORD1(v38) = v26;
        *(_DWORD *)(v6 + 4) = HIDWORD(v38);
        v27 = *(_QWORD *)(v6 + 8);
        LOBYTE(v38) = v23;
        *(_QWORD *)(v6 + 8) = v21;
        v21 = v27;
      }
      else
      {
        sub_121860(v6, *(_QWORD *)(v21 + 16), v21, v7);
      }
      tinfo_property = get_tinfo_property();
      v29 = *(_BYTE *)(v6 + 1);
      v30 = v29 & 0xFD;
      v31 = v29 | 2;
      v32 = (tinfo_property & 0x2F) == 13;
      v33 = 1;
      if ( v32 )
        v30 = v31;
      *(_BYTE *)(v6 + 1) = v30;
      goto LABEL_35;
    }
    *(_QWORD *)&v43 = 0;
    qfree();
    goto LABEL_21;
  }
  return result;
}

