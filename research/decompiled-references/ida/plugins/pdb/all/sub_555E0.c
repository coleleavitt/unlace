unsigned __int64 __fastcall sub_555E0(_QWORD *a1, _QWORD *a2, int a3, double a4, double a5, double a6)
{
  int v9; // r13d
  unsigned int v10; // ebx
  _QWORD *v11; // r14
  __int64 v12; // rdi
  _QWORD *v13; // rdx
  unsigned __int64 v14; // r13
  _QWORD *v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r15
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  void *v22; // r9
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  _BOOL8 v27; // rdi
  _QWORD *v29; // rax
  bool v30; // zf
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned __int64 v34; // rsi
  int v35; // [rsp+10h] [rbp-88h]
  unsigned int v36; // [rsp+14h] [rbp-84h]
  __int64 v37; // [rsp+18h] [rbp-80h]
  void *v38; // [rsp+18h] [rbp-80h]
  __int64 v39; // [rsp+18h] [rbp-80h]
  void *v40; // [rsp+18h] [rbp-80h]
  unsigned __int64 v41; // [rsp+18h] [rbp-80h]
  __int64 v42; // [rsp+20h] [rbp-78h]
  __int64 v43; // [rsp+20h] [rbp-78h]
  void *v44; // [rsp+20h] [rbp-78h]
  _QWORD *v45; // [rsp+28h] [rbp-70h]
  __int64 v46; // [rsp+28h] [rbp-70h]
  int v47; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v48; // [rsp+40h] [rbp-58h] BYREF
  __int64 v49; // [rsp+48h] [rbp-50h]
  int v50; // [rsp+50h] [rbp-48h]
  unsigned __int64 v51; // [rsp+58h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  if ( a3 && (*(unsigned __int8 (__fastcall **)(_QWORD, int *, __int64))(*(_QWORD *)*a2 + 48LL))(*a2, &v47, 4) )
  {
    v9 = a3 - 4;
    if ( v47 == -248595923 )
    {
      v35 = 28;
    }
    else
    {
      v35 = 32;
      if ( v47 != -248426012 )
      {
        sub_244A0();
        return v51 - __readfsqword(0x28u);
      }
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 32LL))(*a2);
    v36 = v9 + v10;
    if ( v10 < v9 + v10 )
    {
      v11 = a1 + 101;
      do
      {
        v12 = *a2;
        v48 = 0xFFFF;
        v49 = 0xFFFFFFFFLL;
        v50 = 0xFFFF;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64))(*(_QWORD *)v12 + 48LL))(v12, &v48, 20) )
          return v51 - __readfsqword(0x28u);
        v13 = (_QWORD *)a1[102];
        v14 = HIDWORD(v48) | ((unsigned __int64)(unsigned __int16)v48 << 32);
        if ( !v13 )
          goto LABEL_31;
        v15 = a1 + 101;
        do
        {
          while ( 1 )
          {
            v16 = v13[2];
            v17 = v13[3];
            if ( v13[4] < v14 )
              break;
            v15 = v13;
            v13 = (_QWORD *)v13[2];
            if ( !v16 )
              goto LABEL_13;
          }
          v13 = (_QWORD *)v13[3];
        }
        while ( v17 );
LABEL_13:
        if ( v11 == v15 )
        {
LABEL_31:
          v39 = v49;
          v18 = (__int64)(a1 + 100);
          v29 = (_QWORD *)operator new(0x30u);
          v30 = a1[105] == 0;
          v29[4] = v14;
          v22 = v29;
          v29[5] = v39;
          if ( v30 )
            goto LABEL_33;
          v21 = a1[104];
          v24 = 0;
          if ( *(_QWORD *)(v21 + 32) >= v14 )
            goto LABEL_33;
        }
        else
        {
          if ( v14 >= v15[4] )
            goto LABEL_25;
          v42 = v49;
          v18 = (__int64)(a1 + 100);
          v37 = (__int64)v15;
          v45 = v13;
          v19 = (_QWORD *)operator new(0x30u);
          v21 = v37;
          v19[4] = v14;
          v22 = v19;
          v19[5] = v42;
          v23 = *(_QWORD *)(v37 + 32);
          if ( v14 >= v23 )
          {
            v41 = *(_QWORD *)(v37 + 32);
            v24 = (unsigned __int64)v45;
            if ( v23 >= v14 )
            {
LABEL_29:
              if ( v22 )
                operator delete(v22, 0x30u);
              goto LABEL_25;
            }
            if ( v21 != a1[104] )
            {
              v44 = v19;
              v46 = v21;
              v33 = std::_Rb_tree_increment(v21, v23, v24, v20, v21, v19, a4, a5, a6);
              v22 = v44;
              v24 = v33;
              if ( v14 >= *(_QWORD *)(v33 + 32) )
                goto LABEL_33;
              v21 = v46;
              v34 = v41;
              if ( !*(_QWORD *)(v46 + 24) )
              {
                if ( !v46 )
                  goto LABEL_29;
                goto LABEL_42;
              }
              v21 = v33;
            }
          }
          else
          {
            v24 = a1[103];
            if ( v37 == v24 )
              goto LABEL_20;
            v38 = v19;
            v43 = v21;
            v25 = std::_Rb_tree_decrement(v21, v23, v24, v20, v21);
            v22 = v38;
            if ( *(_QWORD *)(v25 + 32) >= v14 )
            {
LABEL_33:
              v40 = v22;
              v31 = sub_54C80(v18, v14, v24, v26, v21);
              v22 = v40;
              v21 = v32;
              v24 = (unsigned __int64)v31;
              goto LABEL_20;
            }
            v24 = *(_QWORD *)(v25 + 24);
            v21 = v43;
            if ( v24 )
              v24 = v43;
            else
              v21 = v25;
          }
        }
LABEL_20:
        if ( !v21 )
          goto LABEL_29;
        if ( v11 != (_QWORD *)v21 && !v24 )
        {
          v34 = *(_QWORD *)(v21 + 32);
LABEL_42:
          v27 = v14 < v34;
          goto LABEL_24;
        }
        v27 = 1;
LABEL_24:
        std::_Rb_tree_insert_and_rebalance(v27, v22, v21, a1 + 101, a4, a5, a6);
        ++*(_QWORD *)(v18 + 40);
LABEL_25:
        v10 += v35;
      }
      while ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 40LL))(*a2) && v10 < v36 );
    }
  }
  return v51 - __readfsqword(0x28u);
}

