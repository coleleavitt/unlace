unsigned __int64 __fastcall sub_1ABEA0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  char v3; // al
  _QWORD *v5; // rax
  _QWORD *v7; // rbp
  __int64 v8; // r13
  char v9; // al
  __int64 v10; // rdx
  unsigned int v11; // r13d
  __int64 v12; // r13
  __int64 v13; // rsi
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  size_t v20; // r10
  __int64 v21; // r8
  size_t v22; // r11
  __int64 v23; // rsi
  _QWORD *v24; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rsi
  unsigned __int64 v29; // rbx
  __int64 v30; // r12
  unsigned __int64 v31; // rbp
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // [rsp+0h] [rbp-88h]
  unsigned __int64 v37; // [rsp+8h] [rbp-80h]
  unsigned __int64 v38; // [rsp+8h] [rbp-80h]
  __int64 v39; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+10h] [rbp-78h]
  size_t v41; // [rsp+10h] [rbp-78h]
  size_t v42; // [rsp+20h] [rbp-68h]
  __int64 v43; // [rsp+28h] [rbp-60h]
  void *src; // [rsp+30h] [rbp-58h] BYREF
  __int128 v45; // [rsp+38h] [rbp-50h]
  unsigned __int64 v46; // [rsp+48h] [rbp-40h]

  v2 = a2[1];
  v3 = *((_BYTE *)a1 + 24);
  v46 = __readfsqword(0x28u);
  if ( v2 )
  {
    v36 = v2 - 1;
    if ( !v3 )
      goto LABEL_4;
    v30 = v2 + 3;
    v31 = v2 + 4;
    --v2;
LABEL_43:
    v32 = *a2;
    if ( a2[2] < v31 )
    {
      v35 = qvector_reserve();
      *a2 = v35;
      v32 = v35;
    }
    a2[1] = v31;
    *(_BYTE *)(v32 + v30) = 0;
    *(_DWORD *)(*a2 + v2) = 1701736302;
    return v46 - __readfsqword(0x28u);
  }
  if ( v3 )
  {
    v31 = 5;
    v30 = 4;
    goto LABEL_43;
  }
  v36 = 0;
LABEL_4:
  v5 = (_QWORD *)a1[1];
  if ( v5 )
  {
    if ( a1[2] )
    {
      v7 = (_QWORD *)v5[1];
      if ( v5 != v7 )
      {
        while ( 1 )
        {
          if ( v2 )
          {
            v8 = v2 - 1;
            if ( v36 < v2 - 1 )
            {
              v27 = v2 + 1;
              v28 = *a2;
              v29 = v2 + 2;
              if ( a2[2] < v29 )
              {
                v39 = v27;
                v34 = qvector_reserve();
                v27 = v39;
                *a2 = v34;
                v28 = v34;
              }
              a2[1] = v29;
              *(_BYTE *)(v28 + v27) = 0;
              *(_WORD *)(*a2 + v8) = 8236;
            }
          }
          v9 = *((_BYTE *)v7 + 32);
          v10 = v7[3];
          v11 = *((_DWORD *)v7 + 11);
          if ( v9 == 1 )
          {
            v18 = *a1;
            v45 = 0;
            src = nullptr;
            sub_12F430(*(_DWORD **)(v18 + 1504), (__int64 *)&src, v10, v11);
            v19 = v45;
            if ( (_QWORD)v45 )
            {
              v20 = v45 - 1;
              if ( (_QWORD)v45 != 1 )
              {
                v21 = a2[1];
                v22 = v45 - 1;
                if ( v21 )
                {
                  --v21;
                  v22 = v20 + v21;
                  v19 = v45 + v21;
                }
                v23 = *a2;
                if ( a2[2] < v19 )
                {
                  v43 = v21;
                  v42 = v45 - 1;
                  v41 = v22;
                  v38 = v19;
                  v33 = qvector_reserve();
                  v21 = v43;
                  v20 = v42;
                  *a2 = v33;
                  v23 = v33;
                  v22 = v41;
                  v19 = v38;
                }
                a2[1] = v19;
                *(_BYTE *)(v23 + v22) = 0;
                memcpy((void *)(v21 + *a2), src, v20);
              }
            }
            if ( src )
            {
              *(_QWORD *)&v45 = 0;
              qfree();
            }
          }
          else if ( v9 == 5 )
          {
            sub_F6610(a2);
          }
          sub_F6610(a2);
          v12 = a2[1];
          if ( v12 )
          {
            v15 = v12 + 1;
            v14 = a2[1];
            v13 = *a2;
            --v12;
            if ( a2[2] >= v15 )
              goto LABEL_15;
          }
          else
          {
            v13 = *a2;
            v14 = 1;
            v15 = 2;
            if ( (unsigned __int64)a2[2] >= 2 )
              goto LABEL_15;
          }
          v40 = v14;
          v37 = v15;
          v17 = qvector_reserve();
          v14 = v40;
          v15 = v37;
          *a2 = v17;
          v13 = v17;
LABEL_15:
          a2[1] = v15;
          *(_BYTE *)(v13 + v12) = 58;
          *(_BYTE *)(*a2 + v14) = 0;
          sub_310D10(v7 + 5, a2);
          if ( (*v7 & 2) == 0 )
          {
            v16 = (_QWORD *)v7[2];
            if ( (*(_BYTE *)v16 & 2) != 0 )
            {
              v24 = (_QWORD *)(*v7 & 0xFFFFFFFFFFFFFFFCLL);
              v25 = *v24;
              if ( (*v24 & 2) == 0 )
              {
                while ( (_QWORD *)v24[2] == v7 )
                {
                  v7 = v24;
                  v26 = v25 & 0xFFFFFFFFFFFFFFFCLL;
                  v25 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v25 & 2) != 0 )
                  {
                    v7 = (_QWORD *)v26;
                    goto LABEL_18;
                  }
                  v24 = (_QWORD *)v26;
                }
              }
              v7 = v24;
            }
            else
            {
              do
              {
                v7 = v16;
                v16 = (_QWORD *)v16[1];
              }
              while ( (*(_BYTE *)v16 & 2) == 0 );
            }
          }
LABEL_18:
          if ( v7 == (_QWORD *)a1[1] )
            return v46 - __readfsqword(0x28u);
          v2 = a2[1];
        }
      }
    }
  }
  return v46 - __readfsqword(0x28u);
}

